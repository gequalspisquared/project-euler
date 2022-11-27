#include <iostream>

template<typename T>
bool isPalindromeNumber(T num)
{
    T originalNum = num;
    T reversedNum = 0;

    while (num >= 10)
    {
        reversedNum *= 10;
        reversedNum += num%10;
        num /= 10;
    }

    reversedNum *= 10;
    reversedNum += num%10;

    return reversedNum == originalNum;
}

int main()
{
    int num = 999;

    auto largestPalindrome = 0;
    for (auto num1 = num; num1 > 0; num1--)
        for (auto num2 = num1; num2 > 0; num2--)
            if (isPalindromeNumber(num1*num2)) 
                largestPalindrome = (largestPalindrome < num1*num2) ? 
                                    num1*num2 : largestPalindrome;
    
    std::cout << largestPalindrome << "\n";

    return 0;
}