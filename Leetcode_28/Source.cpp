#include <iostream>

class Solution
{
public:
	int strStr(std::string haystack, std::string needle)
	{
		int counter = 0;
		for (int i = 1; i < haystack.length(); i++)
		{
			if (haystack[i - 1] == needle[0] && haystack[i] == needle[1])
			{
				int k = 2;
				counter = 2;
				for (int j = i+1; j < needle.length(); j++)
				{
					if (haystack[j] == needle[k])
					{
						counter++;
						k++;
						if (counter == needle.length()) return i - 1;
					}
				}
			}
		}
		return -1;
	}
};

int main()
{
	Solution daps;
	std::string a = "sadbutsad";
	std::string b = "sad";
	std::string c = "leetcode";
	std::string d = "leeto";
	std::string x = "hello";
	std::string y = "ll";
	std::cout << daps.strStr(c, d);
	return 0;
}