#include <iostream>
#include <vector>

/*

—ам решить не смог, поэтмоу обычной версии задани€ пока что нет. 

–ешение:

o(n^2) по времени
o(n) по пам€ти

≈сть дополнительный массив, который хранит длины максимальных последовательностей до этого числа по индексу
включительно. ћы пепебираем все элементы массива и ищем элемент меньше текущего, если нашли, то выбираем
последовательность с учетом числа на котором мы находимс€. Ќу и выбираем максимальную последовательность
среди всех подпоследовательностей.


*/

class Solution
{
public:
    int lengthOfLIS(std::vector<int>& Nums)
    {
        std::vector<int> Subsequences(Nums.size(), 1);
        int Result = 0;
        for (int i = 0; i < Nums.size(); i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (Nums[j] < Nums[i])
                {
                    Subsequences[i] = std::max(Subsequences[i], Subsequences[j] + 1);

                }
            }
            Result = std::max(Result, Subsequences[i]);
        }
        return Result;
    }
};

int main()
{
    return 0;
}