#include <iostream>
#include <vector>

/*

��� ������ �� ����, ������� ������� ������ ������� ���� ��� ���. 

�������:

o(n^2) �� �������
o(n) �� ������

���� �������������� ������, ������� ������ ����� ������������ ������������������� �� ����� ����� �� �������
������������. �� ���������� ��� �������� ������� � ���� ������� ������ ��������, ���� �����, �� ��������
������������������ � ������ ����� �� ������� �� ���������. �� � �������� ������������ ������������������
����� ���� ����������������������.


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