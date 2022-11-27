#include <vector>
#include <iostream>

#include "../include/Primes.hpp"

int main()
{
    size_t num = 10'001;
    auto primes = genPrimes(0, 4*num*num);

    std::cout << primes[num] << "\n";

    return 0;
}