#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

/*

11.07.2025
10:34

������: ���� ������ Jewels, ��� ���� ��������������� char � ���� ������ Stones, ��� ���� �������������� char. ����� ��������
����� char �� Stones �������� Jewels. Char's �������������� � ��������.

����: ���-�������, ����� ������ ����� ���������� ������ ���� ������� ����. � �������� ���� �� ����� ��� � Jewels.

*/

class Solution
{
public:
    int numJewelsInStones(std::string jewels, std::string stones)
    {
        int Result = 0;
        std::unordered_map<char, int> Map;
        for (size_t i = 0; i < stones.size(); i++)
        {
            char Stone = stones[i];
            Map[Stone]++;
        }

        for (size_t i = 0; i < jewels.size(); i++)
        {
            char Jewel = jewels[i];
            if (Map.count(Jewel)) Result += Map[Jewel];
        }

        return Result;
    }
};