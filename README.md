# Caesar-Cyper
Encrypts user-inputted plaintext, as per the below:

>plaintext:  HELLO
>ciphertext: URYYB

Completed in part of Harvard's [CS50 - Introduction to Computer Science, 2020](https://cs50.harvard.edu/x/2020/)
This was pset 2: [Caesar](https://cs50.harvard.edu/x/2020/psets/2/caesar/)

### Background
Caesar’s algorithm encrypts messages by “rotating” each letter by k positions. If p is some plaintext (i.e., an unencrypted message), pi is the ith character in p, and k is a secret key (i.e., a non-negative integer), then each letter, ci, in the ciphertext, c, is computed as
> ci = (pi + k) % 26
