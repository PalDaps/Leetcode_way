#include <iostream>
#include <vector>

/*

16:38
18.07.2025

������: ���� ���� � String � ������. ����� ��������� �� � �������� ��� � string.

����: �������������� String ����� � ����� � ������� String[i] - '0'. ������ ��������� ����� � ������� %2 � /.

*/

class Solution
{
public:
    std::string StringNumber(std::string Str, size_t Begin)
    {
        std::string Result = "";
        for (size_t i = Begin; i < Str.size(); i++)
        {
            if (Str[i] == '-') break;
            Result += Str[i];
        }
        return Result;
    }

    std::string StringBin(std::string Number)
    {
        std::string Result = "";
        int Temp = 0;
        for (size_t i = 0; i < Number.size(); i++)
        {
            Temp = (Number[i] - '0') + Temp * 10;
        }

        while (Temp)
        {
            Result = ((Temp % 2 == 0) ? '0' : '1') + Result;
            Temp /= 2;
        }

        return Result;
    }

    std::string convertDateToBinary(std::string date)
    {
        std::string Year = StringNumber(date, 0);
        std::string Moth = StringNumber(date, 5);
        std::string Day = StringNumber(date, 8);
        return StringBin(Year) + "-" + StringBin(Moth) + "-" + StringBin(Day);
    }
};