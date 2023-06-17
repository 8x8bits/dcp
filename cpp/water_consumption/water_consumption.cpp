#include <iostream>


int main()
{
    int T, X;

    std::cin >> T;
    while(T--)
    {
        std::cin >> X;
        if(X >= 2000)
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
