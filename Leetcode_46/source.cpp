#include <iostream>
#include <vector>
#include <stack>

/*

17.08.2025
21:46

������: �� ����������� �����, ����� ���������� ������������ ������� ������������ ��������.

����:

�������:

����������:

�������, ��� ��� backtracking. ���������� ������, ��� ����������� ���� ��������� ���������� �������� "()"

�� ���� ����� ������������ � ������ ������� - solve. ��� ����� ������� ��������� ���
������������ �������� ���� ��������� ����������. �� �� ���� ������������?

�� �������, � ����� ������ �� ������ ���� �� ����������. ����� ������� ������ ��������?
����� ���� ��� ������ ������� ���������� �������� � ������� ������? - ��!

� ������ � �� ���� ���������...

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