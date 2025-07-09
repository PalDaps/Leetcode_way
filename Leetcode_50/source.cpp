#include <iostream>

/*

09.07.2025
16:25

������ : �� ���� ������ double ����� � int �����. ����� �������� double � int. ������ �������� ������ ��������
�������, ��� n^2.

����:

�������: ����� ��������� ������ ����� ������� 0, ������ ���������� ��������. ���� n > 0. ������ x ��������
�� ����� � �� �������� ������� �� 1. ���� n < 0, �� �������� 1/x * �� ����� �� �������� ������ �� 1.

P.S. 16:44 ��� ����� �� ������� ��������. ����.

*/

class Solution 
{
public:
    double myPow(double x, int n)
    {
        if (n == 0) return 1;
        else if (n > 0)
        {
            return x * myPow(x, n - 1);
        }
        double Result = (1 / x)*myPow(x, n+1);
        return Result;
    }
};

int main()
{
    Solution Daps;
    Daps.myPow(2, -2);
    return 0;
}