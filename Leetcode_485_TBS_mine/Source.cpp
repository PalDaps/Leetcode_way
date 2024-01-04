#include <iostream>

// C language
int findMaxConsecutiveOnes(int* pNums, int numsSize)
{
    int Sum = 0;
    for (int i = 0, PrewSum = 0; i < numsSize; i++)
    {
        if (pNums[i] == 1) PrewSum++;
        else PrewSum = 0;
        Sum = Sum > PrewSum ? Sum : PrewSum;

    }
    return Sum;
}

int main()
{
    int Nums1[] = { 1,1,0,1,1,1 };
    int Nums2[] = { 1, 0, 1, 1, 0, 1 };
    int Size = 6;
    findMaxConsecutiveOnes(Nums1, Size);
    return 0;
}