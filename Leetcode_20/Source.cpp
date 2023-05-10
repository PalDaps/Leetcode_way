#include <iostream>
#include <vector>
/*
class Solution
{
public:
	bool isValid(std::string s) {
		if (s.size() % 2 == 0) {
			int l1, l2 = 0, x = 0, y = 0, z = 0;
			l1 = s.size();
			for (int i = 0; i < s.size(); i++)
			{
				switch (s[i])
				{
				case (')'): {
					x--;
					if (x < 0) return 0;
					break;
				}
				case ('}'): {
					y--;
					if (y < 0) return 0;
					break;
				}
				case (']'): {
					z--;
					if (z < 0) return 0;
					break;
				}
				case ('('):
				{   if ((i + 1) != s.size()) {
					x++;
					int Scale = 0;
					for (int j = i + 1; j < s.size(); j++)
					{
						if (s[j] == '(')
							Scale++;
						else if ((l2 >= l1 && l1 != 0) && s[j] == ')')
							return 0;
						else if (s[j] == ')' && Scale > 0) {
							Scale--;
						}
						else if (s[j] == ')' && Scale == 0) {
							j = s.size();
							continue;
						}
						else if ((j + 1) == s.size() && (s[j] != ')' || Scale != 0))
							return 0;
						l2++;
					}
					if (l2 < l1 && l2 != 0)
					{
						l1 = l2;
						l2 = 0;
					}
					else
						l1 = s.size();
					break;
				}
				else return 0;
				break;
				}
				case ('{'):
				{
					if ((i + 1) != s.size()) {
						y++;
						int Scale = 0;
						for (int j = i + 1; j < s.size(); j++)
						{
							if (s[j] == '{')
								Scale++;
							else if ((l2 >= l1 && l1 != 0) && s[j] == '}')
								return 0;
							else if (s[j] == '}' && Scale > 0) {
								Scale--;
							}
							else if (s[j] == '}' && Scale == 0) {
								j = s.size();
								continue;
							}
							else if ((j + 1) == s.size() && (s[j] != '}' || Scale != 0))
								return 0;
							l2++;
						}
						if (l2 < l1 && l2 != 0)
						{
							l1 = l2;
							l2 = 0;
						}
						else
							l1 = s.size();
						break;
					}
					else return 0;
				}

				case ('['):
				{if ((i + 1) != s.size()) {
					int Scale = 0;
					z++;
					for (int j = i + 1; j < s.size(); j++)
					{
						if (s[j] == '[')
							Scale++;
						else if ((l2 >= l1 && l1 != 0) && s[j] == ']')
							return 0;
						else if (s[j] == ']' && Scale == 0) {
							j = s.size();
							continue;
						}
						else if (s[j] == ']' && Scale > 0) {
							Scale--;
						}
						else if ((j + 1) == s.size() && (s[j] != ']' || Scale != 0))
							return 0;
						l2++;
					}
					if (l2 < l1 && l2 != 0)
					{
						l1 = l2;
						l2 = 0;
					}
					else
						l1 = s.size();
					break;
				}
				else return 0;
				}

				}
			}
			if (x == 0 && y == 0 && z == 0)
				return 1;
		}
		return 0;
	}
};
*/
class Solution
{
public:
	bool isValid(std::string s)
	{
		if (s.size() % 2 != 0) return false;
		int dist_one = 777;
		int dist_two = 777;
		int dist_three = 777;
		int counter = 0;
		int counter_of_duplicate = 0;
		int counter_find_two = 0;
		int counter_find_three = 0;
		std::vector<int> okey;
		for (int i = 0; i < s.size(); i++)
		{
			switch (s[i])
			{
			case '{':
			{
				for (int j = i + 1; j < s.size(); j++)
				{

					if (s[j] == '{')
					{
						counter_of_duplicate++;
						counter++;
					}
					else if (s[j] == '}')
					{
						if (counter_of_duplicate == 0)
						{
							dist_one = counter;
							if (dist_one % 2 == 0)
							{
								// != 0 std::cout << dist_one;
								okey.push_back(dist_one);
								dist_one = 0;
								j = s.size();
								continue;
								// return 0;
							}
						}
						counter++;
						if (counter_of_duplicate >= 1) counter_of_duplicate--;
					}
					else
					{
						counter++;
					}
				}
				counter = 0;
				break;
			}
			case '[':
			{
				for (int j = i + 1; j < s.size(); j++)
				{
					if (s[j] == '[')
					{
						counter_of_duplicate++;
						counter++;
					}
					else if (s[j] == ']')
					{
						if (counter_of_duplicate == 0)
						{
							dist_two = counter;
							if (dist_two % 2 == 0)
							{
								// != 0 std::cout << dist_one;
								okey.push_back(dist_two);
								dist_two = 0;
								j = s.size();
								continue;
								// return 0;
							}
						}
						counter++;
						if ( counter_of_duplicate>= 1 ) counter_of_duplicate--;
					}
					else
					{
						counter++;
					}
				}
				counter = 0;
				break;
			}
			case '(':
			{
				for (int j = i + 1; j < s.size(); j++)
				{
					if (s[j] == '(')
					{
						counter_of_duplicate++;
						counter++;
					}
					else if (s[j] == ')')
					{
						if (counter_of_duplicate == 0)
						{
							dist_three = counter;
							if (dist_three % 2 == 0)
							{ 
								// != 0 std::cout << dist_one;
								okey.push_back(dist_three);
								dist_three = 0;
								j = s.size();
								continue;
								// return 0;
							}
						}
						counter++;
						if (counter_of_duplicate >= 1) counter_of_duplicate--;
					}
					else
					{
						counter++;
					}
				}
				counter = 0;
				break;
			}
			/*case '}':
			{
				break;
			}
			case ']':
			{
				break;
			}
			case ')':
			{
				break;
			}

			}
			*/

			}
			// std::cout << dist_one << std::endl << dist_two << std::endl << dist_three << std::endl;
			// std::cout << counter_find_one << std::endl << counter_find_two << std::endl << counter_find_three << std::endl;
			// if (dist_one % 2 == 0 && dist_two % 2 == 0 && dist_three % 2 == 0) return true;
		}
		for (auto i : okey)
			std::cout << i << " ";
		if (((dist_one % 2) * (dist_two % 2) * (dist_three % 2)) == 0) return true;
		else return false;

	}
};



int main()
{
	std::string brackets = "{({(())}{()})}";
	std::string brackets_ = "(())()";
	std::string brackets__ = "[([{)(}])]";
	Solution daps;
	daps.isValid(brackets__);
	return 0;
}