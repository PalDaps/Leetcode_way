#include <iostream>
#include <vector>

/*

03.08.2025
21:26

������: ���� ����� n. ����� ������ ��������� ��������� ����� �������� n ������� ��� �� 1 � 2. 

����: ��������� � �����������

P.S. 21:28 ������� ���, ����� ����� ��� ������ ���������, ��� ��� ����� ������ �� ����� ��������� � �� �����.
�� �����, ��� ��� ��������� ������ � ������ ������������. ���� ������ ���� ������. �� ���-���� ������� ��������
��� ��� �� ��������. �� ����, � ��� ��������, �� � �����!)

*/

class Solution 
{
public:
    int Memo(int n, std::vector<int>& Dp)
    {
        if (n <= 2) return n;
        if (Dp[n] != -1) return Dp[n];
        int Left = Memo(n - 1, Dp);
        int Right = Memo(n - 2, Dp);
        Dp[n] = Left + Right;
        return Dp[n];
    }
    int climbStairs(int n)
    {
        std::vector<int> Dp(n + 1, -1);
        return Memo(n, Dp);
    }
};