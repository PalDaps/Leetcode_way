#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
	std::string longestCommonPrefix(std::vector<std::string>& strs)
	{
		std::string finish = "";
		std::sort(strs.begin(), strs.end());
		int size_strs = strs.size();
		std::string first = strs[0], last = strs[size_strs - 1];
		for (int i = 0; i < std::min(first.size(), last.size()); i++)
		{
			if (first[i] != last[i])
			{
				return finish;
			}
			finish = finish + first[i];
		}
		return finish;
	}
};

int main()
{
	std::vector<std::string> user = { "flow", "flex", "flexible"};
	Solution daps;
	std::cout << daps.longestCommonPrefix(user);
	return 0;
}