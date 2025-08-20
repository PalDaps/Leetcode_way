#include <iostream>
#include <vector>

/*

20.08.2025
18:05

Задача: Даны часы работников, нужно понять кто отработал больше чем target

Идея: :)

P.S. 18:10 Чисто одну расчилочную, чтобы поймать мотивацию пробовать решать задачи, которые мне не по силам и сгорать морально.

*/

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(std::vector<int>& hours, int target)
    {
        int Count = 0;
        for (int i = 0; i < hours.size(); i++)
            if (hours[i] >= target) Count++;
        return Count;
    }
};