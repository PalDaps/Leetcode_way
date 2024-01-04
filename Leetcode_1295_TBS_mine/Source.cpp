#include <iostream>

// C language
int NumberOfDigits(int Number);

int findNumbers(int* Nums, int numsSize)
{
    int NumberOfEven = 0;
    for (int i = 0; i < numsSize; i++)
    {
        int Digits = NumberOfDigits(Nums[i]);
        if (Digits % 2 == 0) NumberOfEven++;
    }
    return NumberOfEven;
}

int NumberOfDigits(int Number)
{
    int Temp = Number;
    int CountOfDigits = 0;
    while (Temp != 0)
    {
        Temp /= 10;
        CountOfDigits++;
    }
    return CountOfDigits;
}

int main()
{
    return 0;
}