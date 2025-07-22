
/*

22:08
22.07.2025

«адача : дано число n, нужно вернуть наименьшее число, которое делитс€ на n и на 2.

»де€ : четное или нечетное

*/

class Solution 
{
public:
    int smallestEvenMultiple(int n)
    {
        return n % 2 == 0 ? n : 2 * n;
    }
};