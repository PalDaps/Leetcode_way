#include <vector>

/*

02.08.2025
15:12

Задача: Дано число n. Нужно вернуть количество вариантов расстановки n - ферзей на n*n доске, таких что ферзи не бьют
друг друга.

Идея: BackTracking + Recursion

Решение: 

Функция check(board, i, j) - Можем ли мы поставить ферзя в i, j?
- Если выше в этом столбце j уже стоит ферзь, то - нет.
- строку i не смотрим, потому что там ничего нет, так как пробуем ставить ферзя туда
- Если выше по левой диагонали стоит ферзь, то нет.
- Если выше по право диагонали стоит ферзь, то нет.
Функция sovlve(board, i)
- Отслеживается базовый случай рекурсии, если дошли до конца, то возрващаем 1.
- Проверяем можем ли поставить ферзя в позицию (Row;Col). Если да, то пробуем заполнить других ферзей рекурсивно.
- Если не можем поставить ферзя в позицию, то пробуем поставить его следующую ячейку строки.

P.S. 15:15 Впервые встретил эту задачу ~2 года назад на курсе с++ от Михаила Густокашина, тогда впервые я понял, что
не понимаю рекурсию. Ну и сейчас, конечно же, эту задачу не решу.
P.S. 15:30 Мда, тут нет смысла тратить время на создание собственного алгоритма. Мне хотя бы понять какой-нибдуь эталон.
И +/- понять идею и паттерн backtracking. :)
P.S. 15:50 Тяжко.
P.S. 17:10 Почти два часа понимал задачу. И не понял до конца :) Непонятно почему BackTracking и непонятно, где 
глубина рекурсии.
P.S. 17:22 Ппц это красиво

Визуалиция: https://www.cs.usfca.edu/~galles/visualization/RecQueens.html

*/


class Solution
{
public:
    bool check(std::vector<std::vector<bool>>& Board, int Row, int Col)
    {
        int n = Board.size(); // так как n*n, то не важно откуда брать размер для итерации

        // Идем до i == Row, так как именно в (Row; Col) хотим поставить ферзя
        for (int i = 0; i <= Row; i++)
        {
            if (Board[i][Col]) return false; // Выше в столбце стоит ферзь

            // >= Потому что вариант когда Row - i == 0 и Col - i == 0 нас тоже устраивает
            if (Row - i >= 0 && Col - i >= 0 && Board[Row - i][Col - i]) return false;

            // До n, потому что индексы у столбцов, строк лежат в интервале [0;n-1]
            if (Row - i >= 0 && Col + i < n && Board[Row - i][Col + i]) return false;
        }
        return true;
    }
    // Где зарыт BackTracking?
    int Solve(std::vector<std::vector<bool>>& Board, int Row)
    {
        // Базовый случай для рекурсии и просто для случая n == 1
        size_t Size = Board.size();
        if (Row == Size) return 1;
        // Количество вариантов
        int Count = 0;

        // Идем по столбцам 
        for (size_t Col = 0; Col < Size; Col++)
        {
            // Смотри можем ли поставить ферзя в Row и Col
            if (check(Board, Row, Col))
            {
                // Поставили на доску
                Board[Row][Col] = true;

                Count += Solve(Board, Row + 1); // Идем на следующую строку
                // Пробуем поставить ферзя в другую колонку
                Board[Row][Col] = false;
            }
        }
        return Count;
    }
    int totalNQueens(int n)
    {
        std::vector<std::vector<bool>> Board(n, std::vector<bool>(n, 0));
        return Solve(Board, 0);
    }
};

/*

// Notes of repeats

// 02.08.2025  : Success
// 19:42       : After two hours! Success! But not fully understand idea 
// P.S.		   : Task +, Idea +/-, Solution +, Corner cases +

*/