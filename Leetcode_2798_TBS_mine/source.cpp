#include <iostream>
#include <vector>

/*

20.08.2025
18:05

������: ���� ���� ����������, ����� ������ ��� ��������� ������ ��� target

����: :)

P.S. 18:10 ����� ���� �����������, ����� ������� ��������� ��������� ������ ������, ������� ��� �� �� ����� � ������� ��������.

*/

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(std::vector<int>& hours, int target)
    {
        int Count = 0;
        for (int i = 0; i < hours.size(); i++)
            if (hours[i] >= target) Count++;
        return Count;
    }
};