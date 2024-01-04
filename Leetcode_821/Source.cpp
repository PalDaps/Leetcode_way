#include <iostream>
#include <vector>


class Solution
{
public:
    std::vector<int> shortestToChar(std::string String, char Char)
    {
        std::vector<int> Result(String.size());
        for (int i = 0; i < String.size(); i++)
        {
            if (String[i] == 'Char') Result[i] = 0;
            else
            {
                int LeftDist = GoToLeft(String, Char, i);
                int RightDist = GoToRight(String, Char, i);
                if (LeftDist == -1) Result[i] = RightDist;
                else if (RightDist == -1) Result[i] = LeftDist;
                else
                {
                    int MinDist = std::min(LeftDist, RightDist);
                    Result[i] = MinDist;
                }
            }
        }
        return Result;
    }

    int GoToRight(std::string& String, char Char, int Start)
    {
        int i = Start;
        int RightBorder = String.size() - 1;
        while (String[i] != Char)
        {
            i++;
            if (i == RightBorder && String[i] != Char) return -1;
        }
        return abs(i - Start);
    }
    int GoToLeft(std::string& String, char Char, int Start)
    {
        int i = Start;
        int LeftBorder = 0;
        while (String[i] != Char)
        {
            i--;
            if (i <= LeftBorder && String[i] != Char) return -1;
        }
        return abs(i - Start);
    }
};

class Solution1
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
    std::string Test2 = "baaa";
    Solution daps;
    daps.shortestToChar(Test2, 'b');    
    return 0;
}