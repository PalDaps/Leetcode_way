#include <iostream>
#include <vector>

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

int main()
{
    return 0;
}
