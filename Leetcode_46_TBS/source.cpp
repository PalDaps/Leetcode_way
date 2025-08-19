#include <iostream>
#include <vector>

/*

19.08.2025
11:53

Задача: Дан вектор чисел, нужно вернуть двумерный вектор всех возможных вариантов всех перестановок.

Идея: Перебрать начиная с 0 индекса. Можно свапать с начального индекса и использовать backtracking.  

Решение:


                                      (1,2,3)                              index = 0  so swap index 0 with each index>=0
                                  /      |        \
                               /         |           \
                             /           |              \
                  (1,2,3)          (2,1,3)           (3,2,1)               index = 1  so swap index 1 with each index>=1
                   /  \                /   \              /   \
                 /      \            /       \          /       \
           (1,2,3)  (1,3,2)      (2,1,3) (2,3,1)     (3,2,1) (3,1,2)       index = 2  so swap index 2 with each index>=2

P.S. 21:11 В голове не укладывается.

*/


class Solution
{
public:
    void Bactracking(std::vector<int> Nums, int Begin, std::vector<std::vector<int>>& Res)
    {
        if (Begin == Nums.size())
        {
            Res.push_back(Nums);
            return;
        }

        for (int i = Begin; i < Nums.size(); i++)
        {
            std::swap(Nums[Begin], Nums[i]);
            Bactracking(Nums, Begin + 1, Res);
            std::swap(Nums[Begin], Nums[i]);
        }
    }

    std::vector<std::vector<int>> permute(std::vector<int>& nums)
    {
        std::vector<std::vector<int>> Result;
        Bactracking(nums, 0, Result);
        return Result;
    }
};