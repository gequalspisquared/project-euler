#include <iostream>

int main()
{
    size_t fib1 = 1;
    size_t fib2 = 2;
    size_t sum  = 2;

    while (true)
    {
        size_t tmp = fib2;
        fib2 += fib1;
        fib1 = tmp;

        if (fib2 > 4'000'000) break;
        
        sum += (fib2%2 == 0)*fib2;
    }

    std::cout << "sum = " << sum << "\n";

    return 0;
}