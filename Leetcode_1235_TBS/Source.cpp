#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

/*
Задание.

Три массива.

startTime = [ 1, 2, 3, 3]  <- время начала 
endTime =   [ 3, 4, 5, 6]  <- время окончания
profit =    [50,10,40,70]  <- профит

Нужно найти максимальный профит, чтобы две задачи не перекрывались по времени.

Решение.

Создать двумерный массив, в котором первый столбец будет отвечать за конец работы.
Далее остортировать данный массив относительно конца работы.
Будем фиксировать суммарный профит работы и конец этой работы.
Первая работа {0, 0}.
И находим максимальный профит включая предыдущие работы.

*/

class Solution
{
public:
    int jobScheduling(std::vector<int>& StartTime, std::vector<int>& EndTime, std::vector<int>& Profit)
    {
        int n = StartTime.size();
        std::vector<std::vector<int>> Jobs;
        for (int i = 0; i < n; i++)
        {
            Jobs.push_back({ EndTime[i], StartTime[i], Profit[i] });
        }
        std::sort(Jobs.begin(), Jobs.end());
        std::map<int, int> dp = { {0, 0} };
        for (auto& job : Jobs)
        {
            auto iter = dp.upper_bound(job[1]);
            auto iter_prev = std::prev(dp.upper_bound(job[1]));
            int part1 = std::prev(dp.upper_bound(job[1]))->second;
            int curr = part1 + job[2];
            if (curr > dp.rbegin()->second)
                dp[job[0]] = curr;
        } 
        return dp.rbegin()->second;
    }
};

int main()
{
    std::vector<int> sTime1 = { 1,2,3,3 };
    std::vector<int> eTime1 = { 3,4,5,6 };
    std::vector<int> Profit1 = { 50,10,40,70 };
    Solution daps;
    daps.jobScheduling(sTime1, eTime1, Profit1);
    return 0;
}