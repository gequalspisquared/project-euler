#include <vector>
#include <iostream>
#include <cmath>

#include "../include/Primes.hpp"

int main()
{
    size_t num = 600851475143;
    size_t lowerBound = 0;
    size_t upperBound = (size_t)sqrt(num) + 1;
    auto primes = genPrimes(lowerBound, upperBound);

    size_t biggestPrimeFactor = 0;

    size_t numLeft = num;
    while (numLeft > 1)
    {
        for (auto prime : primes)
            if (numLeft%prime == 0) 
            {
                biggestPrimeFactor = prime;
                numLeft /= prime;
                break;
            }
    }

    std::cout << biggestPrimeFactor << "\n";

    return 0;
}