#include <iostream>
#include <vector>

/*

07.08.2025
21:03

������: ���� ����� n � ����� k <= n. ����� ������� ������ ���� ���������� �������� k, ����� ��� [1, n]. �� ����, ���� n = 4, � k = 2, ��
[1,2], [1,3], [1,4], [2,3], [2,4], [3,4]. ����������� ������ � ����� ���������� �� ����� �������� [1,1], [2,2]...

����: �� ���� ��� �� ������� �������, �������� �� �� ������ �������.

�������: ������ � �������� 1. ����� ������������ � ������� �� �������� ������. � ����� ������������ [1,2], ���� ������ ����������
����� k, �� ��������� ��� ���������� � ������������� ������ � ������������ �� ��� ������������ ������. ������� ��������� �����
� ������� �������� �������� �����.

P.S. 21:15 ������ ������� ����. ���� �����. ((((.

*/

class Solution
{
public:
    void BackTracking(int Start, std::vector<int>& Comb,
        std::vector<std::vector<int>>& Result, int n, int k)
    {
        if (Comb.size() == k)
        {
            Result.push_back(Comb);
            return;
        }

        for (int i = Start; i <= n; i++)
        {
            Comb.push_back(i);
            BackTracking(i + 1, Comb, Result, n, k);
            Comb.pop_back();
        }
    }

    std::vector<std::vector<int>> combine(int n, int k)
    {
        std::vector<std::vector<int>> Result;
        std::vector<int> Comb;

        BackTracking(1, Comb, Result, n, k);
        return Result;
    }
};