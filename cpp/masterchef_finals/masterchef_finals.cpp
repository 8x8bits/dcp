/*
Problem
Chef has been working hard to compete in MasterChef.
He is ranked X out of all contestants. However, only 10 contestants would be selected for the finals.

Check whether Chef made it to the top 10 or not?

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of one integers X — the current rank of Chef.

Output Format
For each test case, output on a new line, YES, if Chef made it to the top 10 and NO otherwise.

Each character of the output may be printed in either uppercase or lowercase. That is, the strings NO, no, nO, and No will be treated as equivalent.

Constraints
1 <= T <= 100
1 <= X <= 100
*/
#include <iostream>

int main()
{
	int T, X;
	std::cin >> T;
	while(T--)
	{
	    std::cin >> X;
	    if(X<=10)
	    {
	        std::cout << "Yes" << std::endl;
	    }
	    else
	    {
	        std::cout << "No" << std::endl;
	    }
	}
	return 0;
}
