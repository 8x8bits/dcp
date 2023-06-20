"""
The modulo - % function is helpful whenever we want to check the divisibility of 2 numbers.

Task
There are multiple test cases denoted by the integer T.
You are given 2 integers - A and B.
For each test case, you need to output the following 2 space separated integers on a single line

The quotient when A is divided by B - i.e. A//B
The remainder when A is divided by B - i.e. A%B
"""
NumberOfTestCases = int(input())

for TestCase in range(NumberOfTestCases):
    A, B = map(int, input().split())
    # The quotient when A is divided by B - i.e. A//B
    # The remainder when A is divided by B - i.e. A%B
    print(A//B, A%B)
