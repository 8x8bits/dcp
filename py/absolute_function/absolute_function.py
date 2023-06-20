"""
Let us check the abs function in a bit more detail

Task
There are multiple test cases denoted by the integer T.
You are given 2 integers - A and B.
For each test case, you need to output the following 4 space separated integers on a single line
    A−B
    B−A
    abs(A−B)
    abs(B−A)
What do you observe in the results?
Go ahead and code out the solution in the IDE.
"""
NumberOfTestCases = int(input())

for TestCase in range(NumberOfTestCases):
    A, B = map(int, input().split())
    print(A-B, B-A, abs(A-B), abs(B-A))
