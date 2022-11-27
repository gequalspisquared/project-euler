#include <iostream>

int main()
{
    uint32_t sum = 0;

    for (uint32_t i = 1; i < 1000; i++) 
    {
        if (i%3 == 0) 
        {
            sum += i;
            continue;
        }
        if (i%5 == 0) 
            sum += i;
    }

    std::cout << sum << "\n";

    return 0;
}