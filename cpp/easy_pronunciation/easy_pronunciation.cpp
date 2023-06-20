/*
Problem
Words that contain many consecutive consonants, like "schtschurowskia", are generally considered somewhat hard to pronounce.

We say that a word is hard to pronounce if it contains 4 or more consonants in a row; otherwise it is easy to pronounce.
For example, "apple" and "polish" are easy to pronounce, but "schtschurowskia" is hard to pronounce.

You are given a string S consisting of N lowercase Latin characters.
Determine whether it is easy to pronounce or not based on the rule above
    — print YES if it is easy to pronounce and NO otherwise.

For the purposes of this problem, the vowels are the characters {a,e,i,o,u} and the consonants are the other 21 characters.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains a single integer N, the length of string S.
The second line of each test case contains the string S.

Output Format
For each test case, output on a new line the answer — YES if S is easy to pronounce, and NO otherwise.

Constraints
1 <= T <= 100
1 <= N <= 100
S contains only lowercase Latin characters, i.e, the characters
*/
#include <iostream>
#include <unordered_set>

#define HARD 4
#define RESET 0

int main()
{
    int number_of_testcases;
    std::string input_string;
    int string_length;
    int string_hardness;
    std::unordered_set<char> vowel_set = {'a', 'e', 'i', 'o', 'u'};
    
    std::cin >> number_of_testcases;
    while(number_of_testcases--)
    {
        string_hardness = RESET;
        std::cin >> string_length;
        std::cin >> input_string;
        
        for(int idx=0; idx<string_length; ++idx)
        {
            if(vowel_set.find(input_string[idx]) != vowel_set.end())
            {
                string_hardness = RESET;
            }
            else
            {
                ++string_hardness;
                if(string_hardness >= HARD)
                {
                    break;
                }
            }
        }
        if(string_hardness >= HARD)
        {
            std::cout << "No" << std::endl;
        }
        else
        {
            std::cout << "Yes" << std::endl;
        }
    }
}
