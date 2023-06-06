#include <iostream>
#include <vector>
#include <unordered_map>


class Solution
{
public:
	std::vector<int> twoSum(std::vector<int>& nums, int target)
	{
		std::unordered_map<int, int> visited;
		int len = nums.size();
		for (int i = 0; i < len; ++i)
		{
			int n = nums[i];
			int complement = target - n;
			if (visited.count(complement))
			{
				return { visited[complement], i
				};
			}
			visited[n] = i;
		}
		return {};
	}
};


int main()
{
	Solution daps;
	std::vector<int> a = { 1, 2, 6, 5, 4, 1, 4, 2 };
	for ( auto i : daps.twoSum(a, 11))
		std::cout << i << " ";
	return 0;
}