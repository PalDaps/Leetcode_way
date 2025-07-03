#include <iostream>
#include <vector>

/*

03.07.2025
14:18

������: ���� ������ char-��, ����� ��� �����������.

����: ��� ���������. ��������� ������ � ������, ����� ��������� �����������, ������ ���������. 
����� ����� ����� ����� �� ��������.

P.S. ����� � ������� ���� �� ����� 5, �� ��� � ���������. ���� ������ ��� ���� ��� ������ ������ �� ��������.

*/

class Solution
{
public:
    void Recursion(std::vector<char>& s, size_t Left, size_t Right)
    {
        if (Left >= Right) return;
        char Temp = s[Left];
        s[Left] = s[Right];
        s[Right] = Temp;
        Left++;
        Right--;
        Recursion(s, Left, Right);
    }
    void reverseString(std::vector<char>& s)
    {
        Recursion(s, 0, s.size() - 1);
    }
};
