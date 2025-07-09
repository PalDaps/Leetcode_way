#include <iostream>

/*

09.07.2025
16:59

������ : �� ���� ������ double ����� � int �����. ����� �������� double � int. ������ �������� ������ ��������
�������, ��� n^2.

����: ��������� n � ��� ���� �� ���� �������� ��������.

�������: 

P.S. 17:00 ������ �������.

��� ���������� n � ��� ���� ������������ �������� ��������:
x^n = (x^2)^(n/2), ���� n ������
x^n = x * (x^2)^(n/2), ���� n ��������
x^(-n) = 1 / (x^n), ���� n �������������

*/

class Solution {
public:
    double myPow(double x, long long int n)
    {
        if (n == 0) return 1;
        if (n < 0)
        {
            return myPow(1 / x, std::abs(n));
        }

        if (n % 2 == 0)
        {
            return myPow(x * x, n / 2);
        }
        return x * myPow(x * x, n / 2);
    }
};