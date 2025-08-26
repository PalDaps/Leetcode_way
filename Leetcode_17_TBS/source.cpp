#include <iostream>
#include <vector>

/*

26.08.2025
13:35

Задача: Дана раскладка телефона с кнопками от 1 до 9. Каждой кнопке от 2 до 9 соответсвует свой набор букв. Подается входная строка со строковым
числом, например "23" и нужно веррнуть возможные комбинации букв соответсвующих этим цифрам.

Идея: Использовать BackTracking. Массив маппинга для определения какие буквы соответсвуют цифрам. После начать перебор с первой буквы, делигировав 
в функцию, которая добавит следующую букву, соответсвующей следующей цифре.

Решение:

Брейншторм:

P.S. 13:40 Вроде как понятно, но на самом деле задачу не глубоко изучил, могу возникнуть проблемы при повторении. Почему? - не знаю.

*/


class Solution
{
public:
    void BackTracking(std::string digits, std::string Comb, int Begin, std::vector<std::string>& Result,
        std::string Map[])
    {
        if (Begin == digits.size())
        {
            Result.push_back(Comb);
            return;
        }

        // Определяем список букв для цифры
        int Num = digits[Begin] - '0';
        std::string Value = Map[Num];

        // Начинаем перебирать все возможные комбинации
        for (int i = 0; i < Value.size(); i++)
        {
            Comb.push_back(Value[i]);
            BackTracking(digits, Comb, Begin + 1, Result, Map);
            Comb.pop_back();
        }
    }
    std::vector<std::string> letterCombinations(std::string digits)
    {
        std::vector<std::string> Result;
        if (digits.size() == 0) return Result;

        // Индекс для перебора всех комбианаций букв в строке, который будет делигирован в рекурсию
        int Begin = 0;
        std::string Combination = "";
        std::string Map[10] = { "", "", "abc", "def", "ghi",
                               "jkl", "mno", "pqrs", "tuv", "wxyz" };
        BackTracking(digits, Combination, Begin, Result, Map);
        return Result;
    }
};