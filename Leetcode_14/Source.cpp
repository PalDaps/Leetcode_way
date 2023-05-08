#include <iostream>
#include <string>
#include <vector>

class Solution
{
public:
	std::string longestCoommonPrefix(std::vector<std::string>& strs)
	{
		int counter = 0;
		int min_size = 0;
		std::string first = strs[0];
		std::string safe_word = "";
		for (int i = 1; i < strs.size(); i++)
		{
			if ( i == 1 ) 
				min_size = std::min(first.size(), strs[i].size());
			for (int j = 0; j < min_size; j++)
			{
				if (first[j] == strs[i][j])
				{
					counter++;
				}
			}
			min_size = counter;
			counter = 0;
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
	std::vector<std::string> words = { "a","a","car" };
	// std::cout << words[1] << std::endl;
	// std::cout << words[1].size() << std::endl;
	// for (int i = 0; i < words[1].size(); i++)
		// std::cout << (words[1])[i] << " ";
	// std::cout << sizeof(words[1][0]) << " ";
	Solution daps;
	std::cout << daps.longestCoommonPrefix(words);
 	return 0;
}