#include <iostream>

class Solution
{
public:
	int strStr(std::string haystack, std::string needle)
	{
		int counter = 0;
		if (haystack == needle) return 0;
		for (int i = 0; i < haystack.length(); i++)
		{
			if ( haystack[i] == needle[0] )
			{
				int k = i+1;
				counter = 1;
				if (needle.length() == 1) return i;
				for (int j = 1; j < needle.length(); j++)
				{
					if (haystack[k] == needle[j])
					{
						counter++;
						k++;
						if (counter == needle.length()) return i;
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
	std::string v = "abc";
	std::string n = "c";
	std::cout << daps.strStr(v, n);
	return 0;
}