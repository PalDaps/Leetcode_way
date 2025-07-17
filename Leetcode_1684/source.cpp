#include <iostream>
#include <vector>
#include <unordered_map>

/*

20:08
17.07.2025

Задача: Есть разрешающая строка с неповторяющимися буквами и массив строк. Нужно найти такие строки в массиве, 
которые содержат только буквы разрешающей строки.

Идея: Перебор с подсчетом

Решение: Перебор. Бежим по строке в массиве, если буква равна букве в разрешающей строке, то переходим к следующей
букве. Если не равна, то смотрим скольким буквам она не равна в разрешающей строке. Если всем, то скипаем букву.
Иначе строка подходит.

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