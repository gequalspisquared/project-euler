#include <cstddef>
#include <iostream>
#include <vector>

#include "../include/Primes.hpp"

std::vector<size_t> genPrimes(size_t lowerBound, size_t upperBound)
{
    std::vector<size_t> primes;

    if (lowerBound > upperBound) 
    {
        std::cout << "error in genPrimes: lowBound > uppBound\n";
        return primes;
    }

    bool prime[upperBound];
    for (auto& b : prime) b = true;
    prime[0] = false;
    prime[1] = false;

    // remove even numbers
    for (auto num = 4; num < upperBound; num += 2) 
        prime[num] = false;

    // Sieve of Eratosthenes
    for (auto num = 3; num < upperBound; num += 2)
    {
        if (prime[num])
            for (auto n = num*2; n < upperBound; n += num)
                prime[n] = false;
    }

    for (auto num = lowerBound; num < upperBound; num++) 
        if (prime[num])
            primes.push_back(num);
    
    return primes;
}

std::vector<size_t> getPrimeFactors(const std::vector<size_t>& primes, size_t num)
{
    std::vector<size_t> factors;

    auto numLeft = num;
    while (numLeft > 1)
    {
        for (auto prime : primes)
            if (numLeft%prime == 0) 
            {
                factors.push_back(prime);
                numLeft /= prime;
                break;
            }
    }

    return factors;
}