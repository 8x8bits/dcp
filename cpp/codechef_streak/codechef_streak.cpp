/*
Problem
CodeChef offers a feature called streak count. A streak is maintained if you solve at least one problem daily.

Om and Addy actively maintain their streaks on CodeChef.
Over a span of N consecutive days, you have observed the count of problems solved by each of them.

Your task is to determine the maximum streak achieved by Om and Addy and find who had the longer maximum streak.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.

Each test case consists of multiple lines of input.

The first line of each test case contains an integer N — the number of days.

The second line of each test case contains N space-separated integers, the ith of which is Ai representing the problems solved by Om on the ith day.

The third line of each test case contains N space-separated integers, the ith of which is Bi representing the problems solved by Addy on the ith day.

Output Format
For each test case, output:

OM, if Om has longer maximum streak than Addy;
ADDY, if Addy has longer maximum streak than Om;
DRAW, if both have equal maximum streak.

Constraints
1 <= T <= 10^5
1 <= N <= 10^5
0 <= Ai, Bi <= 10^9

The sum of N over all test cases won't exceed 6.10^5
*/
#include <iostream>
#include <algorithm>

int main() {
	int number_of_testcases;
	int number_of_days;
	int om_code_streak;
	int addy_code_streak;
	int problems_solved;
	int current_streak;
	
	std::cin >> number_of_testcases;
	while(number_of_testcases--)
	{
	    om_code_streak = addy_code_streak = current_streak = 0;
	    std::cin >> number_of_days;
	    for(int idx=0; idx<number_of_days; ++idx)
	    {
	        std::cin >> problems_solved;
	        if(problems_solved == 0)
	        {
	            current_streak = 0;
	        }
	        else
	        {
	            ++current_streak;
	            om_code_streak = std::max(om_code_streak, current_streak);
	        }
	    }
	    current_streak = 0;
	    for(int idx=0; idx<number_of_days; ++idx)
	    {
	        std::cin >> problems_solved;
	        if(problems_solved == 0)
	        {
	            current_streak = 0;
	        }
	        else
	        {
	            ++current_streak;
	            addy_code_streak = std::max(addy_code_streak, current_streak);
	        }
	    }
	    if(om_code_streak == addy_code_streak)
	    {
	        std::cout << "DRAW" << std::endl;
	    }
	    else if(om_code_streak > addy_code_streak)
	    {
	        std::cout << "OM" << std::endl;
	    }
	    else
	    {
	        std::cout << "ADDY" << std::endl;
	    }
	}
	return 0;
}
