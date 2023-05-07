#include <iostream>
#include <vector>
#include <cmath>

class Solution
{
public:
	bool isPalindrom(int x)
	{
		int p = 1;
		int c = 1;
		int number = 0;
		int y = x;
		/* std::vector<int> numbers;
		int c = 0;
		int n = 1;
		int ost_one = 10;
		int ost_two = 0;
		int counter = 0;
		if (x == 0)
		{
			// std::cout << 1;
			return true;
		}
		if (x % 10 == 0)
			return 0;
		while (x % 10 == 0)
			x = x / 10;
		while (n != 0)
		{
			// n = x % ost - n;
			// ost = ost*10;
			// counter++;
			if (counter == 0)
			{ 
				n = x % ost_one;
				ost_one = 100;
				ost_two = 10;
				counter = 1;
				numbers.push_back(n);
			}
			else
			{ 
				counter++;
				n = (x % ost_one - x % ost_two)/ost_two;
				ost_one = ost_one * 10;
				ost_two = ost_two * 10;
				numbers.push_back(n);
			}
		}
		if (numbers[0] == 0) return false;
		numbers.pop_back();
		for (int i = 0, j = numbers.size() - 1; i < j; i++, j--)
		{
			if (numbers[i] == numbers[j])
				c++;
		}
		// std::cout << counter - 1 << std::endl;
		// std::cout << c << std::endl;
		if (c == numbers.size() / 2 && x > 0) return true;
		else return false;
		*/
		while (p != 0)
		{
			p = y / (pow(10, ++c));
		}
		while (c != 0)
		{
			number = y % 10 * pow(10, c-1) + number;
			y /= 10;
			c--;
		}
	    return number == x;
	}

};

int main()
{
	int x = 10022201;
	int k = 1;
	int p = (x / (pow(10, k)));
	/* std::cout << x % 10 << std::endl;
	std::cout << (x % 100 - x % 10)/10 << std::endl;
	std::cout << (x % 1000 - x % 100)/100 << std::endl;
	std::cout << (x % 10000 - x % 1000)/1000 << std::endl;
	std::cout << (x % 10) << std::endl;
	std::cout << (x % 100) << std::endl;
	std::cout << (x % 1000) << std::endl;
	*/
	// Solution daps;
	// std::cout << daps.isPalindrom(x);
	while ( p != 0)
	{
		p = (x / (pow(10, ++k)));
	}
	std::cout << k;
}