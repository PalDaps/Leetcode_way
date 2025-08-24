#include <iostream>
#include <vector>

/*

24.08.2025
16:39

Задача: Дана раскладка телефона с кнопками от 1 до 9. Каждой кнопке от 2 до 9 соответсвует свой набор букв. Подается входная строка со строковым 
числом, например "23" и нужно веррнуть возможные комбинации букв соответсвующих этим цифрам.

Идея: использовать backtracking

Решение:

Брейншторм:

Уже понятно, что это backtracking и рекусирия, плюс еще наверное понадобится хэш-таблица.

Пока что моя идея - это просто в тупую перебрать все варианты исходя из изначальных параметров.
Знаем, что 2 - abc, 3 - def
Значит "23" - ad, ae, af, bd, be, bf и т.д простой перебор. В чем сложность?
Пока не понимаю.
Попробую ровно это и написать.

Начал перебирвать входную строку и остановился. Нашел какую-то сложность, которую не могу обьяснить.
А как составить комбинцию, если я стою на конкретной цифре и не знаю сколько там еще цифр.

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
            // Узнаем позицию в таблице
            int Index = digits[i] - '0';
            Combination += digits[i];
            BackTracking(Result, Combination, i + 1);
        }
    }
};