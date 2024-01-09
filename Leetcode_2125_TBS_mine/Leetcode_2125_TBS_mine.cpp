#include <iostream>
#include <vector>

/*
Задача: есть вектор строк, в нем единичками обозначаются лазерные установки. Лазерные установки сверху
могут соединяться с лазерными установками снизу(причем одна верхняя соединятся со всеми снизу),
нужно вернуть количество созданных лазерных лучей.

Решение: Бежим по первой строке и смотрим какое количество единичек, запоминаем это значения.
Бежим по следующей строке, если там все нули, то ничего не делаем. Если там есть единички, то
подсчитываем их, а потом перемонажаем с предыдущем значением и суммируем к результату.

*/

class Solution
{
public:
    int numberOfBeams(std::vector<std::string>& Bank)
    {
        int Beams = 0;
        for (int i = 0, PrewDev = 0, CurrDev = 0; i < Bank.size(); i++)
        {

            for (int j = 0; j < Bank[i].size(); j++)
            {
                if (Bank[i][j] == '1') CurrDev++;
            }

            if (CurrDev > 0)
            {
                Beams += CurrDev * PrewDev;
                PrewDev = CurrDev;
            }
            CurrDev = 0;
        }
        return Beams;
    }
};

// 17 : 50 PM / after an 1 day 
// 04 / 01 / 2024 / SUCCESS

// 12 : 10 PM / after a 5 days
// 09 /  01 / 2024 / SUCCESS!
// Уже лучше! Воспроизводил не код, который запомнил с предыдущего решения, а именно суть решения.
// 2

class Solution
{
public:
    int numberOfBeams(std::vector<std::string>& Bank)
    {
        int Beams = 0;
        for (int i = 0, Curr = 0, Prev = 0; i < Bank.size(); ++i)
        {
            for (int j = 0; j < Bank[i].size(); ++j)
            {
                if (Bank[i][j] == '1') Curr++;
            }
            if (Curr > 0)
            {
                Beams += Curr * Prev;
                Prev = Curr;
            }
            Curr = 0;
        }
        return Beams;
    }
};

int main()
{
    return 0;
}
