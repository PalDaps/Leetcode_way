#include <iostream>
#include <vector>

/*

07.07.2025
13:19

������: ����� ��������. F(n) = F(n-1) + F(n-2)

����: �������� � �������

P.S. 13:20 � �� �������, ��� � �� ������� � ��������. ������ � �� ����� �� �������� ��� ��������.

*/

class Solution
{
public:
    int fib(int n)
    {
        if (n <= 1) return n;
        return fib(n - 1) + fib(n - 2);
    }
};