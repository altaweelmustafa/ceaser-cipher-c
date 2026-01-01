# Ceaser cipher using C language

this program allows you to **encrypt** and **decrypt** messages using simple Ceaser cipher.
You can shift letters by a *key* you choose, without changing any spaces and punctuations.


---
## Useage
1. Compile:
```c
gcc ceaser.c -o ceaser
```
3. Run:
```c
./ceaser
```
---
## Encryption
- Input:
```c
Message: I love the sky
Key: 5
Option: 1
```
- Output:
```c
Encrypted: N qtaj ymj xpd
```

---
## Decryption
- Input:
```c
Message: N qtaj ymj xpd
Key: 5
Option: 2
```
- Output:
```c
Decrypted: I love the sky
```

---
### Notes
- Only letters are shifted: spaces and punctuations remains unchanged.
- Both uppercase and lowercase letters are supported.
- Key should be a positive number between **0** - **25**






