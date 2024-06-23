#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    // Setup seed for rand
    srand(static_cast<unsigned int>(time(nullptr)));

    while (1)
    {
        int a = rand() % 10 - 5;   // -5 <= a <= 4
        int b = rand() % 10 - 5;   // -5 <= b <= 4
        int x = rand() % 10 + 1;    // 1 <= x <= 10
        int c = a * x + b;
        int input;

        if (a == 0)
        {
            x = 0;
        }

        // ax+b=c
        if (a == -1)
        {
            std::cout << '-';
        }
        else if (a != 1)
        {
            std::cout << a;
        }

        std::cout << 'x';

        if (b >= 0)
        {
            std::cout << '+';
        }

        std::cout << b << '=' << c << std::endl;
        std::cout << "x=";
        std::cin >> input;
        std::cout << (input == x ? "That's right." : "Wrong.") << std::endl;

        if (input != x)
        {
            std::cout << "Answer : " << x << std::endl;
        }

        std::cout << std::endl;
    }

    return 0;
}