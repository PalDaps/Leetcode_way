#include <iostream>
#include <vector>

/*

24.08.2025
16:39

������: ���� ��������� �������� � �������� �� 1 �� 9. ������ ������ �� 2 �� 9 ������������ ���� ����� ����. �������� ������� ������ �� ��������� 
������, �������� "23" � ����� �������� ��������� ���������� ���� �������������� ���� ������.

����: ������������ backtracking

�������:

����������:

��� �������, ��� ��� backtracking � ���������, ���� ��� �������� ����������� ���-�������.

���� ��� ��� ���� - ��� ������ � ����� ��������� ��� �������� ������ �� ����������� ����������.
�����, ��� 2 - abc, 3 - def
������ "23" - ad, ae, af, bd, be, bf � �.� ������� �������. � ��� ���������?
���� �� �������.
�������� ����� ��� � ��������.

����� ����������� ������� ������ � �����������. ����� �����-�� ���������, ������� �� ���� ���������.
� ��� ��������� ���������, ���� � ���� �� ���������� ����� � �� ���� ������� ��� ��� ����.

*/


class Solution
{
public:
    void BackTracking(std::vector<std::string>& Result, std::string& Combination, int Start, std::string digits)
    {
        if (Combination.size() == digits.size())
        {
            Result.push_back(Combination);
            return;
        }
    }
    std::vector<std::string> letterCombinations(std::string digits)
    {
        std::vector<std::string> Result;
        std::string Combination = "";
        std::vector<std::string> Map = { "",
                                        "",
                                        "abc",
                                        "def",
                                        "ghi",
                                        "jkl",
                                        "mno",
                                        "pqrs",
                                        "tuv",
                                        "wxyz" };
        for (int i = 0; i < digits.size(); i++)
        {
            // ������ ������� � �������
            int Index = digits[i] - '0';
            Combination += digits[i];
            BackTracking(Result, Combination, i + 1);
        }
    }
};