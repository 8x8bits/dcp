/*
Problem
Somu went to the gym today. He decided to do X sets of squats.
Each set consists of 15 squats.

Determine the total number of squats that he did today.

Input Format
The first line contains a single integer T — the number of test cases.
Then the test cases follow.
The first and only line of each test case contains an integer X — the total number of sets of squats that Somu did.

Output Format
For each test case, output the total number of squats done by Somu.

Constraints
1 <= T <= 1000
1 <= X <= 10^5
*/
#include <iostream>

int main()
{
    unsigned int T, X;

	std::cin >> T;
	while(T--)
	{
	    std::cin >> X;
	    std::cout << 15*X << std::endl;
	}
	return 0;
}
