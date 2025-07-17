#include <iostream>
#include <vector>

/*

17:32
17.07.2025

������: ���� ����������� ������ � ���������������� ������� � ������ �����. ����� ����� ����� ������ � �������,
������� �������� ������ ����� ����������� ������.

����: ������� ������ � ������� ����� ������������� ����� ����� ����, � ����� ���. � ������� [char - 'a']

*/

class Solution {
public:
    int countConsistentStrings(std::string allowed, std::vector<std::string>& words)
    {
        int Result = 0;
        bool TrueChar[26] = { 0 };
        for (size_t i = 0; i < allowed.size(); i++)
        {
            TrueChar[allowed[i] - 'a'] = 1;
        }

        for (size_t i = 0; i < words.size(); i++)
        {
            std::string Elem = words[i];
            int TrueChars = 0;
            for (size_t j = 0; j < Elem.size(); j++)
            {
                char Char = Elem[j];
                if (TrueChar[Char - 'a'] == 0) break;
                else TrueChars++;
            }
            if (TrueChars == Elem.size()) Result++;
            TrueChars = 0;
        }
        return Result;
    }
};