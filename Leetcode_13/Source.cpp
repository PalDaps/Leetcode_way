#include <iostream>
#include <vector>

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
		int sum = 0;
		std::vector<int> numbers;
		for (int i = 0; i < s.size(); i++)
		{

			switch (s[i])
			{ 
				case roman_I:
			    {
					numbers.push_back(I);
					break;
			    }
			    case roman_V:
			    {
					numbers.push_back(V);
					break;
			    }
			    case roman_X:
			    {
					numbers.push_back(X);
					break;
			    }
			    case roman_L:
			    {
					numbers.push_back(L);
					break;
			    }
			    case roman_C:
			    {
					numbers.push_back(C);
					break;
			    }
				case roman_D:
				{
					numbers.push_back(D);
					break;
				}
				case roman_M:
				{
					numbers.push_back(M);
					break;
				}
			}

		}
		for (int i = 1; i < numbers.size(); i++)
		{
			if (numbers[i-1] >= numbers[i])
			{
				sum = numbers[i-1] + sum;
			}
			else if (numbers[i-1] < numbers[i])
			{
				sum = sum + (numbers[i] - numbers[i-1]);
				i++;
			}
		}
		if (numbers.size() == 1) return numbers[0];
		if (numbers[numbers.size() - 2] >= numbers[numbers.size() - 1] && numbers.size() != 1)
			sum = sum + numbers[numbers.size() - 1];
		return sum;
	}
};

int main()
{
	std::string roman_number = "D";
	std::string roman_number_two = "MCMXCIV";
	// std::cout << roman_number[0];
	Solution daps;
	std::cout << daps.romanToInt(roman_number);
	return 0;
}