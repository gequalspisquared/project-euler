#include <iostream>

int main()
{
    int max = 100;

    size_t sumOfSquares = 0;
    size_t squareOfSums = max*(max + 1)/2;
    squareOfSums *= squareOfSums;

    for (auto i = 1; i <= max; i++)
    {
        sumOfSquares += i*i;
    }

    std::cout << squareOfSums - sumOfSquares << "\n";

    return 0;
}