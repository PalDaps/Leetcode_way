#include <vector>

/*

12.07.2025
14:02

������: ������ � ������� �������. ���� �������� ������� ���� �������� � �����: �������� 1 ��� ������� 1. ����� ������
����� ����������� ���������� �������� ����� �������, ����� ��� �������� �������� �� 3.

����: ���� �� �������, ��������� 1 � �������� 1, �������� ������� �� ������������ ����� �� ���.

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