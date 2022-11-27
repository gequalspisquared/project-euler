#pragma once

#include <cstddef> // for size_t
#include <vector>

std::vector<size_t> genPrimes(size_t lowerBound, size_t upperBound);
std::vector<size_t> getPrimeFactors(const std::vector<size_t>& primes, size_t num);