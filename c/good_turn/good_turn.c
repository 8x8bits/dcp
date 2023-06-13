/*
Problem
Chef and Chefina are playing with dice. In one turn, both of them roll their dice at once.

They consider a turn to be good if the sum of the numbers on their dice is greater than 6.
Given that in a particular turn Chef and Chefina got X and Y on their respective dice, find whether the turn was good.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case contains two space-separated integers X and Y — the numbers Chef and Chefina got on their respective dice.

Output Format
For each test case, output on a new line, YES, if the turn was good and NO otherwise.

Each character of the output may be printed in either uppercase or lowercase. That is, the strings NO, no, nO, and No will be treated as equivalent.

Constraints
1 <= T <= 100
1 <= X,Y <= 6
*/
#include <stdio.h>

int main(void)
{
    int T, X, Y;

    scanf("%d", &T);
    for(int idx=0; idx<T; ++idx)
    {
        scanf("%d %d", &X, &Y);
        if(X+Y > 6)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
