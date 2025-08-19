.PHONY: all clean pie nopie pack pack_nopie

SRC    := hansapatch.c
OUT    := hansapatch

all: pie

pie: exports.map
	gcc -O2 -fPIE -pie -fno-asynchronous-unwind-tables -fno-plt \
	    -Wl,--version-script=exports.map -o $(OUT) $(SRC)
	objcopy --strip-all --keep-symbol=main \
	                   --keep-symbol=definitely_the_wrong_function \
	                   --keep-symbol=definitely_the_correct_function \
	                   $(OUT)

nopie:
	gcc -O2 -no-pie -fno-asynchronous-unwind-tables -fno-plt -o $(OUT) $(SRC)
	objcopy --strip-all --keep-symbol=main \
	                   --keep-symbol=definitely_the_wrong_function \
	                   --keep-symbol=definitely_the_correct_function \
	                   $(OUT)

pack: pie
	@command -v upx >/dev/null || { echo "Error: upx not found in PATH"; exit 1; }
	upx --best --lzma -o $(OUT)_challenge $(OUT)

pack_nopie: nopie
	@command -v upx >/dev/null || { echo "Error: upx not found in PATH"; exit 1; }
	upx --best --lzma -o $(OUT)_challenge $(OUT)

clean:
	rm -f $(OUT) $(OUT).upx exports.map

exports.map:
	echo "{ global: main; definitely_the_wrong_function; definitely_the_correct_function; local: *; };" > exports.map
