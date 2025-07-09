#include <iostream>

class Solution 
{
public:
    double myPow(double x, int n)
    {
        if (n == 0) return 1;
        else if (n > 0)
        {
            return x * myPow(x, n - 1);
        }
        double Result = (1 / x)* myPow(x, n+1);
        return Result;
    }
};

int main()
{
    Solution Daps;
    Daps.myPow(2, -2);
    return 0;
}