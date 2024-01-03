#include <iostream>
#include <vector>

class Solution
{
public:
    std::vector<int> shortestToChar(std::string String, char Char)
    {
        std::vector<int> Result(String.size());
        int Counter1 = 0;
        int Counter2 = 0;
        bool Flag = false;
        int i = 0;
        while (i != String.size())
        {
            if (String[Counter2] == Char && !Flag)
            {
                Counter1 = Counter2;
                Flag = true;
            }
            if (Counter1 == 0)
            {
                Counter2++;
            }
            if (Flag)
            {
                Result[i++] = Counter1;
                Counter1--;
                if (Counter1 == 0) Flag = false;
            }
        }
        return Result;
    }
};

int main()
{
    std::string Test1 = "loveleetcode";
    Solution daps;
    daps.shortestToChar(Test1, 'e');    
    return 0;
}