#include <iostream>

int main()
{
    int n, i, count = 0;

    std::cout << "Enter n" << std::endl;
    std::cin >> n;

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
    {
        std::cout << "Its a prime" << std::endl;
    }
    else
    {
        std::cout << "Not a prime" << std::endl;
    }
}
