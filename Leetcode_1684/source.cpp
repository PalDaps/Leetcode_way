#include <iostream>
#include <vector>
#include <unordered_map>

/*

20:08
17.07.2025

������: ���� ����������� ������ � ���������������� ������� � ������ �����. ����� ����� ����� ������ � �������, 
������� �������� ������ ����� ����������� ������.

����: ������� � ���������

�������: �������. ����� �� ������ � �������, ���� ����� ����� ����� � ����������� ������, �� ��������� � ���������
�����. ���� �� �����, �� ������� �������� ������ ��� �� ����� � ����������� ������. ���� ����, �� ������� �����.
����� ������ ��������.

*/

class Solution {
public:
    int countConsistentStrings(std::string allowed, std::vector<std::string>& words)
    {
        int Result = 0;
        for (size_t i = 0; i < words.size(); i++)
        {
            std::string Elem = words[i];
            int Wrong = 0;
            for (size_t j = 0, k = 0; j < Elem.size(); j++)
            {
                for (size_t k = 0; k < allowed.size(); k++)
                {
                    if (Elem[j] == allowed[k]) break;
                    else Wrong++;
                }
                if (Wrong == allowed.size()) break;
                Wrong = 0;
            }
            if (Wrong) Wrong = 0;
            else Result++;
        }
        return Result;
    }
};