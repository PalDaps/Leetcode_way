
/*

22:08
22.07.2025

������ : ���� ����� n, ����� ������� ���������� �����, ������� ������� �� n � �� 2.

���� : ������ ��� ��������

*/

class Solution 
{
public:
    int smallestEvenMultiple(int n)
    {
        return n % 2 == 0 ? n : 2 * n;
    }
};