"""
The developer often wants a user to enter multiple values or inputs in one line.
In C++/C user can take multiple inputs in one line using scanf but in Python user can take multiple values or inputs in one line by two methods. 
    Using split() method
    Using List comprehension

Using split() method:
    This function helps in getting multiple inputs from users.
    It breaks the given input by the specified separator.
    If a separator is not provided then any white space is a separator.
    Generally, users use a split() method to split a Python string but one can use it in taking multiple inputs.

    Syntax :
        input().split(separator, maxsplit)
"""
NumberOfTestCases = int(input())

for TestCase in range(NumberOfTestCases):
    A, B, C = input().split(",")
    print(A, B, C);
