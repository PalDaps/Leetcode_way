#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

/*

11.07.2025
10:34

Задача: Есть массив Jewels, где есть неповторяющиеся char и есть массив Stones, где есть потоворяющиеся char. Нужно выяснить
какие char из Stones являются Jewels. Char's чувствительные к регистру.

Идея: Хэш-таблица, чтобы понять какое количества камней есть каждого типа. И смотреть есть ли такой тип в Jewels.

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