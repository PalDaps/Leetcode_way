#include <iostream>
#include <vector>

/*

18:57
14.07.2025

Задача: Есть массив массивов. Нужно понять в каком массиве максимальная сумма элементов.

Идея: идти по массивам и считать суммы, искать максимальную

*/

class Solution {
public:
    int maximumWealth(std::vector<std::vector<int>>& accounts)
    {
        int Max = 0;
        for (size_t i = 0; i < accounts.size(); i++)
        {
            std::vector<int> It = accounts[i];
            int CurrMax = 0;
            for (size_t j = 0; j < It.size(); j++)
            {
                CurrMax += It[j];
            }
            Max = std::max(Max, CurrMax);
        }
        return Max;
    }
};