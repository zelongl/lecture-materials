# Program 1 - Encode / Decode Strings
In this program, you utilize C++ fundamentals (Console I/O, Strings, Branches, Loops and Operators) to encode and decode strings from their character representation to their binary representation and vice versa. 

Your program must be **submitted to GitHub by 6:00 AM CST on Monday, September 12, 2022**. You will receive a 30 point penalty for any program submitted within 48 hours after the due date. Any programs submitted after 6:00 AM CST on Monday, September 14, 2022 will receive a 0.

## Introduction
**Strings** are a data type in C++ that represent a sequence (or array) of characters. Every character is represented by a decimal ASCII value - a decimal number that a computer uses to represent a character. For instance, the character **'a'** is represented by the decimal value **97**. You can find any character's ASCII value by executing the following short code snippet: 

```c++
char myCharacter = 'a' // replace with any character
// print int value of character to console
cout << static_cast<int>(myCharacter); 
```

You can also find a full ASCII table here: https://en.cppreference.com/w/cpp/language/ascii.

**Binary** is a numbering system used by computers in which there are only 2 possible values for each digit, a `0`, and a `1` (or on and off). This is the numbering system that is used for all data and instructions for computers today. We can represent any decimal value (or in this case ascii value) to its binary representation. For instance, the decimal value `5` is represented in binary as the value `101`.  

For more information on numbering systems, see this link here: https://www.mathsisfun.com/binary-decimal-hexadecimal.html

This program will require you to convert a decimal value into binary, and vice versa. You can convert from binary to decimal by using common algorithms. For example:

https://www.wikihow.com/Convert-from-Binary-to-Decimal

https://www.wikihow.com/Convert-from-Decimal-to-Binary

## Program Specifications
You are to create a menu driven program that will allow a user to convert a sentence (string) into its binary representation AND/OR allow a user to convert a series of binary values into it's ascii representation. 

At the start of your program, you will prompt the user to select one of the following options by entering a 1, 2, or 0, in the console. 

```
Please select an option: 
1) Encode a sentence
2) Decode binary
0) Quit
Select Choice (1, 2, or 0):
```

If a user enters any decimal value other than 0 - 2, print an error message and re-prompt the user for a correct entry. 

### Option 1 - Encode a Sentence
If a user enters a `1`, then your program will prompt the user to enter a sentence (which can include whitespace characters) and then print out each character of that string in binary. Each binary representation should be separated by a space character. 
- All sentences will end with a period.

> Hint: Use `getline()` to read in an entire line of text (including whitespaces) from the console.

### Option 2 - Decode binary
If a user enters a `2`, then your program will prompt the user to enter a series of binary "words" (representing characters) then output the result after converting each binary value into a letter. 
- The series of binary numbers will always end in the binary reprentation of the `'.'` (period) character.

> Hint: Use `cin` here to read in each binary value one by one until you reach the binary value for '.' 

### Option 0 - Quit
If a user enters a `0` your program should end.


## Implementation Details
When implementing your program, you adhere to the following guidelines:
- You are allowed to use the `<string>` class to read in, for example, binary, decimal, and hex values.  This will probably help you parse the individual values character by character.
- You may NOT use built in C++ conversion libraries such as `stol`, `atoi`, `std::hex`, etc.  You **MUST** do the conversions yourself using for loops, multiply, divide, modulo, and any helper functions to convert between characters and integers.
- Your program must repeat the menu driven prompt until the user enters a `0`. 
- Your program must compile or it will receive a 0.
- You can and may use functions 
- Your program must include proper comments where necessary.

You will be graded on both functionality of the program and coding style, formatting, structure and commenting.

## Submission Details
You are to submit your program to GitHub (just like in lab1). You may commit and push your code as many times as you like up until the due date. Your last commit will be the version graded.

## Example Output
This is an example console output of a working program: 
```
Please select an option: 
1) Encode a sentence
2) Decode binary
0) Quit
Select Choice (1, 2, or 0): 1

Enter a sentence to be encoded (ending in a period): abcdefghijklmnopqrstuvwxyz.

Encoded String: 1100001 1100010 1100011 1100100 1100101 1100110 1100111 1101000 1101001 1101010 1101011 1101100 1101101 1101110 1101111 1110000 1110001 1110010 1110011 1110100 1110101 1110110 1110111 1111000 1111001 1111010 101110 

Please select an option: 
1) Encode a sentence
2) Decode binary
0) Quit
Select Choice (1, 2, or 0): 2

Enter a series of bytes to decode: 1100001 1100010 1100011 1100100 1100101 1100110 1100111 1101000 1101001 1101010 1101011 1101100 1101101 1101110 1101111 1110000 1110001 1110010 1110011 1110100 1110101 1110110 1110111 1111000 1111001 1111010 101110

Decoded String: abcdefghijklmnopqrstuvwxyz.

Please select an option: 
1) Encode a sentence
2) Decode binary
0) Quit
Select Choice (1, 2, or 0): 1

Enter a sentence to be encoded (ending in a period): Go Mustangs.

Encoded String: 1000111 1101111 100000 1001101 1110101 1110011 1110100 1100001 1101110 1100111 1110011 101110 

Please select an option: 
1) Encode a sentence
2) Decode binary
0) Quit
Select Choice (1, 2, or 0): 2

Enter a series of bytes to decode: 1000111 1101111 100000 1001101 1110101 1110011 1110100 1100001 1101110 1100111 1110011 101110 

Decoded String: Go Mustangs.

Please select an option: 
1) Encode a sentence
2) Decode binary
0) Quit
Select Choice (1, 2, or 0): 8

ERROR: You selected an invalid choice, please try again

Please select an option: 
1) Encode a sentence
2) Decode binary
0) Quit
Select Choice (1, 2, or 0): 0

Thank you!!

Process finished with exit code 0
```

