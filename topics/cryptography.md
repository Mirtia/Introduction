# Cryptography
## Overview / What is it?
If you’ve ever sent a private message, shopped online, or logged into your bank account, you’ve relied on **cryptography** — even if you didn’t know it.  
It’s the invisible shield that makes the three “holy grails” of cybersecurity possible:  
- **Confidentiality** – keeping your data hidden from prying eyes.  
- **Authenticity** – proving that a message really came from who it claims to.  
- **Integrity** – ensuring that the data wasn’t tampered with along the way.  
In the simplest terms, cryptography is the art (and science) of turning information into something unreadable unless you have the right key. Once you do, it can be unlocked and understood.

There are two main types:  
- **Symmetric cryptography** – you and the other person share the same secret key. This works well if you’ve already exchanged keys securely (think: encrypted messaging between friends).  
- **Asymmetric cryptography** – there’s no pre-shared secret. Instead, one key is public (shareable) and the other is private (kept secret). This makes it possible for strangers to securely exchange information or verify identities without having met before.  

From ancient ciphers carved into stone to algorithms powering the internet, cryptography has always been about one thing: making sure secrets stay secret. Cryptography is very broad, so some other relevant topics are digital signatures (needed for online authentication) and hash functions (e.g. used for password storage).

## Real World Applications & Relevance
Cryptography isn’t just for spies or hackers in movies — it’s everywhere in our digital lives:  
- Encrypted messaging apps like [Signal](https://signal.org/docs/specifications/pqxdh/) or WhatsApp.  
- Online banking and payment systems.  
- Secure browsing (the little padlock in your browser).  
- Digital signatures for contracts and software updates.  
- Online voting systems.  

Without cryptography, our digital world would be like sending postcards instead of sealed envelopes — everything would be out in the open.

## Recent News & Trends
The rise of **quantum computers** has cryptographers on high alert. Many of today’s widely used encryption systems — especially in **asymmetric cryptography** — could be broken by sufficiently powerful quantum machines.  

For example, if someone recorded an encrypted chat session today, a future quantum computer might be able to extract the secret keys from it, revealing the entire conversation.  
That’s why researchers are racing to develop **post-quantum cryptography** — encryption methods that stay secure even in the face of quantum computing’s speed and power.  

Governments, tech companies, and security researchers worldwide are already testing these new algorithms, knowing that when the quantum age fully arrives, the safety of our digital communications will depend on them.

## Challenges

Do you want a small challenge? We have prepared two challenges for you!
The second one is a bit trickier, can you solve it too?

1. **Caesar Cipher**: Is my secret safe from you? 
```
Tf zljyla ohz illu ylclhslk
```
2. OTP in ECB mode:

	The DTU Hacker Lab has stealthily concealed the instructions on how to join — how cruel! Their one-time pad key, is only 32 bits — far too short for the full instructions. Since they're limited to [OTP](https://en.wikipedia.org/wiki/One-time_pad) encryption, they turned to [ECB mode](https://en.wikipedia.org/wiki/Block_cipher_mode_of_operation#Electronic_codebook_(ECB)) (Electronic Codebook) in hopes of making it work. At the start of the challenge, you're told that the hidden message begins with:
	
	```
	"To join the DTU Hacker Lab you need to:"
	```
	but the rest remains a mystery. You were able to get their encrypted message:
	```
	001111110110010111111010110011110000010001100011101101001000010100011111011000101011111110000101001011110101111010001111100001010010001101101011101110011100111000001110011110001111101011101001000010100110100011111010110111000000010001111111111110101100101100001110011011111011111010000101000111110110010111100000100001010001000001111100101100111101011000000010011111101111101011010001000000110110111111111010110100100000111001101000101010011100110000011111011011111111101011000100000001010110111011111010110011110000010001100011101101001000010100000111011000111011010011001110000111110111100010111111110000000100101101101011101101001100000101001011011011101011001111010110000010000110010110101000110000010100101101100010101011101101000100011011011110011110000010001010010001000110011010110011110010110000000001111110101010001000101100001110011011111111010111000001000111110111111110110010110001000000100001100001101111111101011100000111011010111011100011011000
	```
	Can you uncover how to join their ranks?

**Those two challenges weren't enough?** Here are more:
- [Cryptohack](https://cryptohack.org/challenges/ctf-archive/)
- [Krypton](https://overthewire.org/wargames/krypton/krypton0.html)

## Further Reading
- Jonathan Katz & Yehuda Lindell: Introduction to Modern Cryptography
- Oded Goldreich: The Foundations of Cryptography
- Nigel Smart: Cryptography: An Introduction
