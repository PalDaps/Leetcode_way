#include <iostream>
#include <string>
#include <vector>

class Solution
{
public:
	std::string longestCoommonPrefix(std::vector<std::string>& strs)
	{
		std::string first = strs[0];
		std::string safe_word = "";
		if (strs.size() == 1) return strs[0];
		int counter = std::min(first.size(), strs[1].size());;
		int min_size = counter;
		for (int i = 1; i < strs.size(); i++)
		{		
			counter = 0;
			for (int j = 0; j < min_size; j++)
			{
				if (first[j] == strs[i][j])
				{
					counter++;
				}
				else
				{
					break;
				}
			}
			min_size = counter;
		}
		for (int i = 0; i < min_size; i++)
		{
			safe_word = safe_word + first[i];
		}
     	return safe_word;
	}
};

int main()
{
	std::vector<std::string> words = {"cir", "car"};
	// std::cout << words[1] << std::endl;
	// std::cout << words[1].size() << std::endl;
	// for (int i = 0; i < words[1].size(); i++)
		// std::cout << (words[1])[i] << " ";
	// std::cout << sizeof(words[1][0]) << " ";
	Solution daps;
	std::cout << daps.longestCoommonPrefix(words);
 	return 0;
}