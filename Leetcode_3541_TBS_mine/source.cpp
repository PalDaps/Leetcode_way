#include <string>

/*

06.08.2025
18:24

������ : ����� ������������ ������� ������� � ��������� ����, ������������� �� �������� ������.

����: ������ ������, ��� ��� ���� ����� 26. � ����� ������������� �� ����� ������� ����� ASCII ����. � ����� ������ ����� ������������
������� ������� � ��������� ����.

*/

class Solution {
public:
    int maxFreqSum(std::string s)
    {
        int Frequences[26] = { 0 };
        size_t Size = s.size();
        for (size_t i = 0; i < Size; i++) Frequences[s[i] - 'a']++;
        int MaxVowel = 0, MaxCons = 0;
        for (size_t i = 0; i < 26; i++)
        {
            char Letter = 'a' + i;
            if (IsVowel(Letter)) MaxVowel = std::max(MaxVowel, Frequences[i]);
            else MaxCons = std::max(MaxCons, Frequences[i]);
        }
        return MaxVowel + MaxCons;
    }

    bool IsVowel(char Letter)
    {
        return Letter == 'a' || Letter == 'e' || Letter == 'i' ||
            Letter == 'o' || Letter == 'u';
    }
};