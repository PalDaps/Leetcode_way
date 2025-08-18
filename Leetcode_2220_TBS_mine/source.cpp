#include <iostream>

/*

18.08.2025
21:35

������: ���� ��� �����. ����� ������ �� ������� ����������� �������������� ����� ����� �� ������� ����� ������� ������.

����: �������� ��������� ���, ���� �� ����� ���������� ������ �� ������. ����� ������������� ���, �� ���� �������� � ��������.

P.S. 21:47 ������� ����������.

*/


class Solution
{
public:
    int minBitFlips(int start, int goal)
    {
        int Count = 0;
        int i = 1;
        while (start != 0 || goal != 0)
        {
            int LastBitStart = start & 1;
            int LastBitGoal = goal & 1;
            if (LastBitStart != LastBitGoal) Count++;
            start >>= 1;
            goal >>= 1;
        }
        return Count;
    }

};