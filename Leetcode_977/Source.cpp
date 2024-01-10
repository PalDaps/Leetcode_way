#include <iostream>

int* sortedSquares(int* pNums, int NumsSize, int* pReturnSize)
{
    *pReturnSize = NumsSize;
    for (size_t i = 0; i < NumsSize; ++i)
    {
        int Temp = pNums[i] * pNums[i];
        pNums[i] = Temp;
    }
    /*
        0 1 2 3 4 5 5
        4 3 1 2 3 1 5
        3 4
        1 3 4
        1 3 4 2
        1 2 3 3 4
        1 1 2 3 3 4
        1 1 2 3 3 4 5
    */
    for (int i = 0; i < NumsSize - 1; ++i)
    {
        for (int j = i; j >= 0 && pNums[j] >= pNums[j + 1]; j--)
        {
            int Temp = pNums[j];
            pNums[j] = pNums[j + 1];
            pNums[j + 1] = Temp;
        }
    }
    return pNums;
}

int main()
{
    int Size = 5;
    int Array[5] = { -4, -1, 0, 3, 10 };
    sortedSquares(Array, 5, &Size);
    return 0;
}