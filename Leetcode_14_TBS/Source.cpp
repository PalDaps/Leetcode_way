#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
	std::string longestCommonPrefix(std::vector<std::string>& strs)
	{
		std::cout << "UnSort : ";
		for (auto i : strs)
			std::cout << i << " ";
		std::cout << std::endl;
		std::string finish = "";
		std::sort(strs.begin(), strs.end());
		std::cout << "Sort : ";
		for (auto i : strs)
			std::cout << i << " ";
		std::cout << std::endl;
		int size_strs = strs.size();
		std::cout << "size_strs = " << size_strs << std::endl;
		std::string first = strs[0], last = strs[size_strs - 1];
		std::cout << "first = " << first  << " last = " << last << std::endl;
		std::cout << "-------------------------------------------" << std::endl;
		for (int i = 0; i < std::min(first.size(), last.size()); i++)
		{
			if (first[i] != last[i])
			{
				return finish;
			}
			finish = finish + first[i];
			std::cout << "finish = finish + first[i] = " << finish << " " << first[i] << std::endl;
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