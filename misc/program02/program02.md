# Program 2 - Cryptography
The CIA has begun intercepting communications from an unknown source that has now become a matter of National Security - the only problem is that they are encrypted! As an expert in cryptography and computer software, YOU are being tasked with creating a program that is able to decrypt the incoming messages, and encrypt new messages so that you can pass on information to the CIA Director.


For this assignment you will write a program that can encrypt and decrypt data using a variation of a
Symmetric Key Cipher. All code must be compiled and run in CLion and must be submitted via GitHub by
**6:00am CST, Monday September 26, 2022**. You may submit by **6:00am, Wednesday September 28, 2022** with a 30 point deduction. 

## Background
The practice of Encryption, or **Cryptogrophy**, involves converting an original message, or critical piece of
information, from **plaintext** into an alternative form known as **ciphertext** so that the information remains
private and is only readable by authorized parties. The ability to encrypt data is one of the primary security
measures that companies use all over the world to ensure the safety and privacy of user information.

One of the earliest methods of encryption was invented by Julius Caesar during the rise of the Roman
Empire in 60 BC and was used to encrypt messages to his correspondents, so that they could not be read
if the message was intercepted by enemies. Augustus Caesar, his nephew, also used this method of
encryption later in his life. Since then, encryption has come a long way, with modern encryption algorithms
like AES, RSA, DES, etc... which are nearly impossible to break with modern technology (although these
could be easily broken with quantum computers, but thats a topic for another day)

## Encryption and Decryption
In this assignment, you are to implement a variation of the Caesar Cipher in C++ to enable encryption and
decryption of messages. There will be 2 main aspects of this program: encryption and decryption. 

### **Part 1 - Encryption**
Let's start off with encryption first, as it will be easier to understand decryption since it is essentially the reverse of the encryption process. 

For this assignment, we are implementing a cipher method that _rotates_ letters in a plaintext message by some amount. The amount to _shift_ is determined by a **key**. The **key** is a number between 0 - 25 which indicates how many letters to shift when encrypting the plain text. For instance lets say a user selects the key value 3 (Fun fact: this is the same way Julius Caesar encrypted messages to his Roman Generals). We would then take the plaintext and shift each letter to the left by **3** letters.

For example each letter of the alphabet gets replaced with the following cipher text:

```
Plaintext:   ABCDEFGHIJKLMOPQRSTUVWXYZ 
Ciphertext:  DEFGHIJKLMOPQRSTUVWXYZABC
```

where we can take a letter, `F`  and shift it **3** letters to the right in the alphabet, which means that `F` becomes `I` in ciphertext (the encrypted message).

In this program, we are going to take that one step further, by using letters of a **key** to describe how
we rotate the characters (number of shifts to perform) in the plaintext message. For instance, providing the **key** `ABC` and the plaintext message `THE SECRET LIES WITH CHARLOTTE` we would encrypt to yield the following ciphertext:

```
Plaintext: THE SECRET LIES WITH CHARLOTTE
Key: ABC
Ciphertext: TIG SFERFV LJGS XKTI EHBTLPVTF
```

where we start with the first letter of the message `T`  and use the first letter of the **key** `A`  to indicate how we shift the alphabet to get the correct character. Since the **key**'s first letter is `A` we shift the first character `0` times, which yields a `T`. The second letter of the message `H` is paired with the second letter of the **key** `B`. So the character becomes `H + 1`  or `I`  in the ciphertext. Then we move to the third letter of the message, using the third letter of the **key** to get `G`  (i.e. `E + 2` ). Then we repeat the process, starting over with the
beginning of the **key** after every 3 characters we encrypt. So the fourth character we would use `A` as the rotating key, and so on and so forth.

The more complex the **key**, the more secure your message will become!

### **Part 2 - Decryption**
Decrypting a message involves the use of the same **key** that was used to encrypt the message. We
simply take that **key** and use it to shift each letter of ciphertext `n` times to the left, where `n` is the
rotation amount of each character of the **key**.

So for instance, given the encrypted message below and where **key = ABC**, we can decrypt
by starting with `A` and shifting that 0 letters to the left to become `A` , `U` and shifting that 1 letter to the
left to become `T` , and so on and so forth, until we can re-create the message!

```
Key: ABC
Ciphertext: AUVADM AU FAXP
Plaintext: ATTACK AT DAWN
```

## Program Specifications
You are to create a program, that allows a user to encrypt or decrypt messages using the algorithm
explained above. Your program must begin by displaying the following options to the user:

```
1. Encrypt Message
2. Decrypt Message
3. Quit
```

If a user selects **option 1**, your program should prompt the user to enter a **key**, then use that
**key** to encrypt a custom message entered via the keyboard.


If a user selects **option 2**, you will first prompt the user to enter a **key** value, then prompt the user to enter the ciphertext to decrypt.

Your program should display the **key**, the plaintext and ciphertext as the output of each option.

And finally, if a user selects **option 3** you will exit the program.

## Implementation Details
Your Program must follow the following guidelines and adhere to the following criteria:

- Your program must re-prompt the user for a list of options after every encrypted or decrypted
message is completed.
- Your program must account for incorrect options entered by a user (you may assume the user will always enter a valid number).
- Your program must contain at least 3 functions
   - You must implement a function using pass by value
   - You must implement a function using pass by reference
   - All functions must have a function prototype (defined in a the `functions` header file) and a function definition (defined in the `functions` source file)
- You must account for a key meeting the following requirements: 
   - Must be at least 1 letter
   - Must only contain alpha characters (a - z, A - Z).
   - If whitespace is included, you may ignore it (i.e. convert `My Key` to `MyKey` to
use in your encryption / decryption algorithm)
- If whitespace or punctuation is included in the message, you may ignore encrypting those
characters. Only encrypt alpha characters (i.e. a - z and A - Z)
- The output of your encrypted message must be in ALL CAPS (as the examples below show).
- A whitespace or special character should not use up a character of the **key** . For instance
given the **key** `SMU` and the message `"A test"` , you use `S` as the rotation for `A` , and `M` for
the rotation of the next alpha character `T` , skipping the rotation of the whitespace character.

## Hints
- Start early and start small! Concentrate on one feature at a time rather than trying to write the whole
program in one sitting. A good way to break up the problem would be
  - Write a function that implements converting a single character to the correct ciphertext
character given a rotation value and do the same thing for decrypting
  - Then use that function to encrypt / decrypt a whole string given a single key value
  - Then add the logic for a key where we use each character of the key to indicate
the rotation or shift value.
  - Save the menu driven program part for last! Concentrate on the core operations of the
program first!
- HINT: Use the `toupper()` function provided by `#include <cctype>` to convert any lower case
letters to upper case before encrypting or decrypting
- HINT: Use `getline()` to read in a full line of text as a string!

**Example Output:**

```
Starting up your cipher!
Please select an option:
1. Encrypt Message
2. Decrypt Message
3. Quit
Enter:
```
User enters 1
```
Enter your key: SMU
Enter the message to be encrypted: Attack at dawn

Encrypting your message...

Key: SMU
Plaintext Message: ATTACK AT DAWN
Ciphertext Message: SFNSOE SF XSIH

Please select an option:
1. Encrypt Message
2. Decrypt Message
3. Quit
Enter:
```
User enters 2 
```
Enter the message to be decrypted: SFNSOE SF XSIH
Enter your key: SMU

Decrypting your message...

Key: SMU
Ciphertext Message: SFNSOE SF XSIH
Plaintext Message: ATTACK AT DAWN

Please select an option:
1. Encrypt Message
2. Decrypt Message
3. Quit
Enter:
```
User enters 3
```
Goodbye!
```

### Additional Examples
Feel free to test your programs with these additional examples below!
1. Plaintext Message: `The quick brown fox jumps over the lazy dog`

   Key: `PASSWORD`

   Ciphertext: `IHW IQWTN QRGOJ TFA YUEHO CMHG TZW HOQB SOY`

2. Plaintext Message: `The Buccaneers are the super bowl champs!`
   
   Key: `TOMBRADY`
   
   Ciphertext: `MVQ CLCFYGSQSJ AUC MVQ TLPHP UCIM THDKIG!`
3. Plaintext Message: `I'm gonna make him an offer he can't refuse.`

   Key: `GODFATHER`
    
   Ciphertext: `O'A JTNGH QRQS KNM TU SWLSU ME VHR'K XSIZSX.`
4. Plaintext Message: `World changers shaped here`

   Key: `SMU`
 
   Ciphertext: `OALDP WZMHYQLK EBSBYV TYJQ`


# Submission Details
All code must be compiled and run in CLion and must be submitted via GitHub by
**6:00am CST, Monday September 26, 2022**. You may submit by **6:00am, Wednesday September 28, 2022** with a 30 point deduction. 