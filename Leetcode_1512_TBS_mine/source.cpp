#include <iostream>
#include <vector>
#include <unordered_map>

/*

09.07.2025
17:43

������ : ������ � ������� �������. ����� ������� ��� � ������� �����.

����: ���� ���� count �� ����� � ���-�������, �� ��������� � ������ ��������.

*/

class Solution 
{
public:
    int numIdenticalPairs(std::vector<int>& nums) 
    {
        int Result = 0;
        std::unordered_map<int, int> Map;
        for (size_t i = 0; i < nums.size(); i++)
        {
            Result += Map[nums[i]];
            Map[nums[i]]++;
        }
        return Result;    
    }
};