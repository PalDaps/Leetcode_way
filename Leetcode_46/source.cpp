#include <iostream>
#include <vector>
#include <stack>

/*

17.08.2025
21:46

Задача: Да гистограмма высот, нужно определить максимальную площадь образованную высотами.

Идея:

Решение:

Брейншторм:

Понятно, что это backtracking. Напоминает задачу, про составление всех возможный комбинаций скобочек "()"

То есть нужно делигировать в другую функцию - solve. Где будут входные параметры для
рекурсивного перебора всех возможных комбинаций. Но от чего оттолкнуться?

Не понятно, в какой момент мы найдем одну из комбинаций. Какой базовый случай рекурсии?
Может быть как только получим комбинацию размером с входной массив? - Да!

А дальше я не могу придумать...

:(

*/

class Solution 
{
public:
    void Solve(std::vector<std::vector<int>>& Res, std::vector<int>& Comb)
    {
        if (Comb.size() == Res[0].size())
        {
            Res.push_back(Comb);
            return;
        }

    }
    std::vector<std::vector<int>> permute(std::vector<int>& nums)
    {
        std::vector<std::vector<int>> Result;
        Solve(Result, nums);
        return Result;
    }
};