# NPTEL-Introduction-to-Programming-in-C-Assignment-6-Question-3
NPTEL Introduction to Programming in C Assignment 6 Question 3

# Question 3
In this question, you are given two positive integers M and N, where M < N. You may assume that N is less than or equal to 100.

The orbit of M with respect to N is defined to be the sequence

M, (2xM) mod N, (2^2xM) mod N, ...

There are at most N elements in the sequence, but for some M, the number of elements in this sequence may be fewer.

You have to output the maximum number of distinct integers in the orbit of M.


For example, if M=5 and N=8, then the orbit of 5 with respect to 8 is

5, 2x5 mod 8, 4x5 mod 8, 8x5 mod 8

which is equal to

5, 2, 4, 0.

Hence the number of distinct integers in the orbit of 5 is 4.

# Sample Input 1
```sh
2 5
```

# Sample Output 1
```sh
4
```

# Sample Input 2
```sh
4 6
```

# Sample Output 2
```sh
2
```
