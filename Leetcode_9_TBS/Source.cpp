#include <iostream>

class Solution
{
public:
	bool isPalindrom(int x)
	{
		if (x < 0 || x != 0 && x % 10 == 0) return false;
		int check = 0;
		while (x > check)
		{
			check = check * 10 + x % 10;
			std::cout << "check = " << check << std::endl;
			x /= 10;
			std::cout << "x /= 10 = " << x << std::endl;
		}
		return (x == check || x == check / 10);
	}
};

int main()
{
	Solution daps;
	daps.isPalindrom(121);
}