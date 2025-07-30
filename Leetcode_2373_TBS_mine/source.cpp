#include <iostream>
#include <vector>

/*

29.07.2025
22:28

«адача: Ќайти всем локальные максимумы матрицы 3*3 в большой матрице.

»де€: ѕо факту просто найти локальный максимум в матрице 3*3.

P.S. 22:29 «адача механически сложна€, не помню как создавать двум ерный вектор и итераци€ по нему тоже не сразу
вспомнилась. ј так задача действительно т€нет на 87.8% Acceptance.

*/

class Solution {
public:
    std::vector<std::vector<int>> largestLocal(std::vector<std::vector<int>>& grid)
    {
        size_t n = grid.size();
        std::vector<std::vector<int>> ResultMartix(n - 2, std::vector<int>(n - 2, 0));
        for (size_t i = 1; i < n - 1; i++)
        {
            for (size_t j = 1; j < n - 1; j++)
            {
                int LocalMax = 0;
                for (size_t NewI = i - 1; NewI < i + 2; NewI++)
                {
                    for (size_t NewJ = j - 1; NewJ < j + 2; NewJ++)
                    {
                        LocalMax = std::max(LocalMax, grid[NewI][NewJ]);
                    }
                }
                ResultMartix[i - 1][j - 1] = LocalMax;
            }

        }
        return ResultMartix;
    }

};