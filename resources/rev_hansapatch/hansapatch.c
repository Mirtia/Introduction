#include <stdint.h>
#include <stdio.h>

#define NOINLINE __attribute__((noinline))
#define USED __attribute__((used))

static const char author[] USED = "mirtia";
static const char help[] USED = "H E L P";
static const uint32_t PUB = 0x6969C0DEu;
static const uint32_t KEY = 0xDECAFFEEu;

/**
 * @brief Generate a nonce using a Jenkins hash-like function. Cute little
 * technique, I chose it because of Jenkins.
 */
static NOINLINE uint32_t generate_nonce_jenkins(void) {
#if defined(__GNUC__) || defined(__clang__)
  uintptr_t ra = (uintptr_t)__builtin_return_address(0);
#else
  uintptr_t ra = 0;
#endif
  uintptr_t pc = (uintptr_t)(void *)&generate_nonce_jenkins;
  uintptr_t sp_hint = (uintptr_t)(void *)&pc;

  uint32_t seed = (uint32_t)(ra ^ (pc >> 3) ^ (sp_hint << 5));

  // Bob Jenkins 32-bit mix <3
  uint32_t x = seed;
  x += (x << 12);
  x ^= (x >> 22);
  x += (x << 4);
  x ^= (x >> 9);
  x += (x << 10);
  x ^= (x >> 2);
  x += (x << 7);
  x ^= (x >> 12);

  return x;
}

/**
 * @brief XOR operation with a constant key. Mark as USED else the compiler will
 * spit it out.
 */
static uint32_t NOINLINE USED xor_op(uint32_t x) { return x ^ KEY; }

/**
 * @brief Function address is visible via nm -D, objdump -t and so on.
 * The goal is to call this function directly from gdb or patch the binary's
 * call to definitely_the_wrong_function with this function.
 */
static int NOINLINE USED definitely_the_correct_function(uint32_t nonce) {
  // The revealed value is visible at runtime.
  // secret = xor_op(PUB ^ nonce)
  uint32_t secret = xor_op(PUB ^ nonce);
  printf("Oh, didn't expect you to solve it that fast... Here is your flag: "
         "FLAG{%08X}\n",
         secret);
  return 0;
}

/**
 * @brief Function to be patched.
 */
static int NOINLINE USED definitely_the_wrong_function(uint32_t value) {
  (void)value;
  printf("W o w, you're really good at following instructions.");
  return 1;
}

int main(int argc, char **argv) {

  if (argc != 1) {
    printf("Hi, you must be new...\n"
           "If only I knew how to call a function.\n"
           "Run without arguments.\n");
    return 1;
  }

  printf("You just had to make one call...");

  uint32_t nonce = generate_nonce_jenkins();

  // Patch with definitely_the_correct_function(nonce). Signatures match: int
  // function(uint32_t).
  int result = definitely_the_wrong_function(nonce);
  return result;
}
