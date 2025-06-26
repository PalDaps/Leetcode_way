#include <vector>
#include <string>
/*

26.06.2025
22:12

Задача: Дан массив строк и символ. Нужно вернуть индексы строк, в которых содержится символ.

Идея: Перебрать строки в массиве и перебрать символы в строках.

*/

class Solution
{
public:
    std::vector<int> findWordsContaining(std::vector<std::string>& words, char x)
    {
        std::vector<int> Result;
        for (size_t i = 0; i < words.size(); i++)
        {
            std::string Str = words[i];
            for (size_t j = 0; j < Str.size(); j++)
            {
                if (Str[j] == x)
                {
                    Result.push_back(i);
                    break;
                }
            }
        }
        return Result;
    }
};