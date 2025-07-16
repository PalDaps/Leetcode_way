#include <iostream>
#include <vector>
#include <unordered_map>

/*

20:08
16.07.2025

Задача: В массиве есть два числа, которые встречаются дважды нужно вернуть их.

Идея: Частоты чисел с помощью хэш-таблицы и смотрим у кого частота 2.

*/

class Solution {
public:
    std::vector<int> getSneakyNumbers(std::vector<int>& nums)
    {
        std::unordered_map<int, int> Map;
        int Answer[2];
        for (size_t i = 0, j = 0; i < nums.size(); i++)
        {
            Map[nums[i]]++;
            if (Map[nums[i]] == 2)
            {
                Answer[j] = nums[i];
                j++;
            }
        }
        return { Answer[0], Answer[1] };
    }
};