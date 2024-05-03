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
        int x = rand() % 10;    // 0 <= x < 10
        int c = a * x + b;
        int input;

        // ax+b=c
        std::cout << a << 'x';

        if (c >= 0)
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