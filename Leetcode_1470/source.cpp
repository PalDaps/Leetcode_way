#include <vector>

/*

13.07.2025
22:46

Задача: Есть массив длины 2*n, в котором числа идут в таком порядке x1, x2, x3, ..., xn, y1, ..., yn. Нужно сделать
так, что числа были в таком пордяке: x1, y1, x2, y2, ...., xn, yn.

Идея: В тупую с созданием дополнительного вектора.

*/

class Solution {
public:
    std::vector<int> shuffle(std::vector<int>& nums, int n)
    {
        std::vector<int> Result(0, 2 * n);
        for (size_t i = 0, j = n; i < n; i++)
        {
            Result.push_back(nums[i]);
            Result.push_back(nums[j]);
            j++;
        }
        return Result;
    }
};