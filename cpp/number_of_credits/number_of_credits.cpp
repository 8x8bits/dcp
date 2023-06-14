/*
Problem
In the current semester, you have taken X RTP courses, Y Audit courses and Z Non-RTP courses.

The credit distribution for the courses are:
    - 4 credits for clearing each RTP course.
    - 2 credits for clearing each Audit course.
    - No credits for clearing a Non-RTP course.

Assuming that you cleared all your courses, report the number of credits you obtain this semester.

Input Format
The first line contains a single integer T, the number of test cases. 
T test cases follow. Each test case consists of one line, containing 3 integers separated by spaces.

    - The first integer is X, the number of RTP courses.
    - The second integer is Y, the number of Audit courses.
    - The third integer is Z, the number of non-RTP courses.

Output Format
The output must consist of T lines.
The ith should consist of a single integer: the number of credits one gets for the ith test case.

Constraints
1 <= T <= 10
1 <= X,Y,Z <= 10
*/
#include <iostream>

int main()
{
    int T, X, Y, Z;
	std::cin >> T;
	while(T--)
	{
	    std::cin >> X >> Y >> Z;
	    std::cout << 4*X+2*Y << std::endl;
	}
	return 0;
}
