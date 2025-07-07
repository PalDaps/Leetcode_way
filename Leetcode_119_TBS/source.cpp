#include <iostream>
#include <vector>

/*

07.07.2025
12:32

������: ����������� �������, �������� ������� ����� ��� ������ � �����������. ����� ������� ��� ������.

����: ��������. ������� ������� ��� �����. ����� ��������� ������ � ������, ��������� ����� �����. 

�������: ����� �� 0 ������� 1. ����� ������ {1,1}, ����������. ����� ������ {1, 2, 1} � ����������. ����� ������� � ������
������� ������������ ��� ��������� ������.

*/

class Solution {
public:
    std::vector<int> getRow(int rowIndex)
    {
        if (rowIndex == 0)
        {
            return { 1 };
        }
        std::vector<int> LastRow = getRow(rowIndex - 1);
        std::vector<int> Current(1, 1);
        for (size_t i = 1; i < LastRow.size(); i++)
        {
            Current.push_back(LastRow[i - 1] + LastRow[i]);
        }
        Current.push_back(1);
        return Current;
    }
};