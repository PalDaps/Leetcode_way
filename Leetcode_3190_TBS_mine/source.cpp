#include <vector>

/*

12.07.2025
14:02

«адача: ћассив с разными числами. ≈сть возможно сделать одну операцию к числу: добавить 1 или вычесть 1. Ќужно пон€ть
какое минимальное количество операций нужно сделать, чтобы все элементы делились на 3.

»де€: »дти по массиву, добавл€ть 1 и вычитать 1, смотреть делитс€ ли получившеес€ число на три.

*/

class Solution {
public:
    int minimumOperations(std::vector<int>& nums)
    {
        int Result = 0;
        for (size_t i = 0; i < nums.size(); i++)
        {
            int Operation = nums[i] + 1;
            if (Operation % 3 == 0) Result++;
            Operation = nums[i] - 1;
            if (Operation % 3 == 0) Result++;
        }
        return Result;
    }
};