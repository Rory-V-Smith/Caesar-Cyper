# Caesar-Cyper
Encrypts user-inputted plaintext, as per the below:

>plaintext:  HELLO
>ciphertext: URYYB

Completed in part of Harvard's [CS50 - Introduction to Computer Science, 2020](https://cs50.harvard.edu/x/2020/)
This was pset 2: [Caesar](https://cs50.harvard.edu/x/2020/psets/2/caesar/)

### Background
Caesar’s algorithm encrypts messages by “rotating” each letter by k positions. If p is some plaintext (i.e., an unencrypted message), pi is the ith character in p, and k is a secret key (i.e., a non-negative integer), then each letter, ci, in the ciphertext, c, is computed as
> ci = (pi + k) % 26
wherein % 26 here means “remainder when dividing by 26.” This formula perhaps makes the cipher seem more complicated than it is, but it’s really just a concise way of expressing the algorithm precisely. Indeed, for the sake of discussion, think of A (or a) as 0, B (or b) as 1, …, H (or h) as 7, I (or i) as 8, …, and Z (or z) as 25. Suppose that Caesar just wants to say Hi to someone confidentially using, this time, a key, k, of 3. And so his plaintext, p, is Hi, in which case his plaintext’s first character, p0, is H (aka 7), and his plaintext’s second character, p1, is i (aka 8). His ciphertext’s first character, c0, is thus K, and his ciphertext’s second character, c1, is thus L.
