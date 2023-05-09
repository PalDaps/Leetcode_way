#include <iostream>

class Solution
{
public:
	int romanToInt(std::string s)
	{
		const char roman_I = 'I';
		const char roman_V = 'V';
		const char roman_X = 'X';
		const char roman_L = 'L';
		const char roman_C = 'C';
		const char roman_D = 'D';
		const char roman_M = 'M';
		int I = 1;
		int V = 5;
		int X = 10;
		int L = 50;
		int C = 100;
		int D = 500;
		int M = 1000;
		for (int i = 0; i < s.size(); i++)
		{

			switch (s[i])
			{ 
				case roman_I:
			    {
					std::cout << I;
					break;
			    }
			    case roman_V:
			    {
					std::cout << V;
					break;
			    }
			    case roman_X:
			    {
					std::cout << X;
					break;
			    }
			    case roman_L:
			    {
					std::cout << L;
					break;
			    }
			    case roman_C:
			    {
					std::cout << C;
					break;
			    }
				case roman_D:
				{
					std::cout << D;
					break;
				}
				case roman_M:
				{
					std::cout << M;
					break;
				}
			}
		}
		return 1;

	}
};

int main()
{
	std::string roman_number = "III";
	// std::cout << roman_number[0];
	Solution daps;
	daps.romanToInt(roman_number);
	return 0;
}