/*
Problem
Write a program that takes a number N as the input, and prints it to the output.

Input Format
The only line contains a single integer.

Output Format
Output the answer in a single line.

Constraints
0 <= N <= 10^5
*/
#include <stdio.h>

int main(void)
{
    // unsigned int size = 4, range = 0 to 4,294,967,295
    unsigned int N = 0;
    scanf("%u", &N);
    printf("%u", N);

    return 0;
}
