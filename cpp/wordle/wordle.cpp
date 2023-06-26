/*
Problem
Chef invented a modified wordle.

There is a hidden word S and a guess word T, both of length 5.

Chef defines a string M to determine the correctness of the guess word. For the ith index:

If the guess at the ith index is correct, the ith character of M is G.
If the guess at the ith index is wrong, the ith character of M is B.
Given the hidden word S and guess T, determine string M.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of two lines of input.
First line contains the string S - the hidden word.
Second line contains the string T - the guess word.

Output Format
For each test case, print the value of string M.

You may print each character of the string in uppercase or lowercase

Constraints
1≤T≤1000
∣S∣=∣T∣=5

S,T contain uppercase english alphabets only.
*/
#include <iostream>

int main()
{
	int number_of_testcases;
	char S[6] = {0};
	char T[6] = {0};
	std::cin >> number_of_testcases;
	while(number_of_testcases--)
	{
	    std::cin >> S;
	    std::cin >> T;
	    for(int i=0; i<5; ++i)
	    {
	        if(S[i] == T[i])
	        {
	            std::cout << "G";
	        }
	        else
	        {
	            std::cout << "B";
	        }
	    }
	    std::cout << std::endl;
	}
	return 0;
}
