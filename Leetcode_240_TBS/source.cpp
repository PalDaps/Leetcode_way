#include <vector>
#include <iostream>

/*

01.08.2025
9:35

������: ���� ��������� �������, ������� ������������� �� ���������� ��������: ����� �� ���� ������� ����������.
����� �� ���� ��������� ����������. ����� ����� � ��� ������������ �����.

����: ������ ������ target � ������� �������� ����. ���� ������� ����� � ������� ������, ��� target, �� ��������� �� 
��������� ������, ����� ��������� �������. ������ ������� ������) size_t -> int.

P.S. 10:23 �� �������� �������.

*/

class Solution
{
public:
    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target)
    {
        size_t Rows = matrix.size();
        size_t Cols = matrix[0].size();

        int i = 0, j = Cols - 1;
        while (i < Rows && j >= 0)
        {
            if (target == matrix[i][j]) return true;
            else if (target > matrix[i][j]) i++;
            else if (target < matrix[i][j]) j--;
        }

        return false;
    }
};

/*

����������� ������

02.08.2025
13:15

������: ���� ��������� �������, ������� ������������� �� ���������� ��������: ����� �� ���� ������� ����������.
����� �� ���� ��������� ����������. ����� ����� � ��� ������������ �����.

����: ��������. ��������� ���������� ������� ������. ����� ����������� ������� ��� ����������� ������, ����������
false.

P.S. 10:23 �� �������� �������.

*/

class SolutionRecusion
{
public:
    bool Recursion(std::vector<std::vector<int>>& matrix, int target, int i, int j)
    {
        size_t Rows = matrix.size();
        if (j < 0 || i >= Rows) return false;

        if (target == matrix[i][j]) return true;
        else if (target > matrix[i][j]) return Recursion(matrix, target, i + 1, j);
        else if (target < matrix[i][j]) return Recursion(matrix, target, i, j - 1);
        return false;
    }
    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target)
    {
        return Recursion(matrix, target, 0, matrix[0].size() - 1);
    }
};

int main()
{
    std::vector<std::vector<int>> Martix = { {-5} };
    Solution Daps;
    Daps.searchMatrix(Martix, -10);
    return 0;
}
