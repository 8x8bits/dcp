/*
Problem
According to a recent survey, Biryani is the most ordered food. Chef wants to learn how to make world-class Biryani from a MasterChef.
Chef will be required to attend the MasterChef's classes for X weeks, and the cost of classes per week is Y coins. What is the total amount of money that Chef will have to pay?

Input Format
The first line of input will contain an integer T — the number of test cases. The description of T test cases follows.
The first and only line of each test case contains two space-separated integers X and Y, as described in the problem statement.

Output Format
For each test case, output on a new line the total amount of money that Chef will have to pay.

Constraints
1 <= T <= 10^4
1 <= X,Y <= 100
*/
#include <iostream>

int main()
{
	int T, X, Y;
	std::cin >> T;
	while(T--)
	{
	    std::cin >> X >> Y;
	    std::cout << X*Y << std::endl;
	}
	return 0;
}

