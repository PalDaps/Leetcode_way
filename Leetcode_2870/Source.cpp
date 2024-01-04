#include <iostream>
#include <vector>
#include <unordered_map>

class Solution
{
public:
    int minOperations(std::vector<int>& Nums)
    {
        std::unordered_map<int, int> Map;
        int Result = 0;
        for (auto i : Nums)
        {
            Map[i]++;
        }
        for (auto i : Map)
        {
            int Add = IsDeleting(i.second);
            if (Add == -1) return Add;
            else
            {
                Result += Add;
            }
        }
        return Result;
    }

    int IsDeleting(int Number)
    {
        if (Number == 1) return -1;
        if (Number % 3 == 0)
        {
            return Number / 3;
        }
        if (Number % 3 == 2)
        {
            return (1 + (Number - 2) / 3);
        }
        if (Number % 3 == 1)
        {
            int NumberOfTwos = 1;
            while ((Number - (2 * NumberOfTwos)) % 3 != 0) NumberOfTwos++;
            int NumberOfTriples = (Number - (2 * NumberOfTwos)) / 3;
            return NumberOfTriples + NumberOfTwos;
        }
        if (Number % 2 == 0)
        {
            return Number / 2;
        }
        return -1;
    }
};

int main()
{
    std::vector<int> Test1 = { 2,3,3,2,2,4,2,3,4 };
    std::vector<int> Test2 = { 2, 1, 2, 2, 3, 3 };
    std::vector<int> Test3 = { 14, 12, 14, 14, 12, 14, 14, 12, 12, 12, 12, 14, 14, 12, 14, 14, 14, 12, 12 };
    Solution daps;
    daps.minOperations(Test3);
    return 0;
}