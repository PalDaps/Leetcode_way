#include <iostream>
#include <vector>

/*

11.07.2025
10:00

Задача : Массив с разными числами. Нужно четные заменить на 0, нечетные заменить на 1. И отсортировать.

Идея: Два указателя.

P.S. Я все-таки очень не внимательный.

*/

class Solution
{
public:
    std::vector<int> transformArray(std::vector<int>& nums)
    {
        size_t NullStart = 0;
        for (size_t i = 0; i < nums.size(); i++)
        {
            int Elem = nums[i];
            if (Elem % 2 == 0) nums[NullStart++] = 0;
        }
        size_t NullEnd = NullStart;
        for (size_t i = NullEnd; i < nums.size(); i++)
        {
            nums[i] = 1;
        }

        return nums;
    }
};