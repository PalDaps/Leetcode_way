/*

26.06.2025
22:32

������: ���� 2 ����� n � m. ����� ������� ��� �����, ������� �� ������� �� m � ������� �����, ������� ������� �� m � ����������
�� 1 �� n ������������.

����: ������� ��������� �� m.

*/

class Solution {
public:
    int differenceOfSums(int n, int m)
    {
        int Result = 0;
        for (size_t i = 1; i <= n; i++)
        {
            if (i % m == 0) Result -= i;
            else Result += i;
        }
        return Result;
    }
};