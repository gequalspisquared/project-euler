#include <vector>
#include <iostream>

#include "../include/Primes.hpp"

int main()
{
    size_t num = 20;
    size_t lowerBound = 0;

    auto primes = genPrimes(0, num);

    size_t smallestMultiple = 1;
    for (size_t n = 1; n <= num; n++)
    {
        if (smallestMultiple%n == 0) continue;

        auto factors = getPrimeFactors(primes, n);
        for (auto factor : factors)
        {
            smallestMultiple *= factor;
            if (smallestMultiple%n == 0) break;
        }
    }

    std::cout << smallestMultiple << "\n";

    return 0;
}