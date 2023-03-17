#include <iostream>
#include <vector>

class Solution
{
public:
	void rotate(std::vector<int>& nums, int k)
	{
		int size_start = size(nums);
		int o = k % size(nums);
		if ( o <= size(nums)-o )
		{ 
		for (int i = 0; i < o; i++)
		{
			nums.insert(nums.begin(), nums[size(nums) - 1 - i]);
		}
		nums.erase(nums.end() - o, nums.end());
		}
		else
		{
			for (int i = 0; i < size_start-o; i++)
			{
				nums.push_back(nums[i]);
			}
			nums.erase(nums.begin(), nums.begin()+(size_start - o));
		}
		for (auto i : nums)
			std::cout << i << " ";
	}
};

int main()
{
	int k = 0;
	std::vector<int> nums = { 1,2,3,4,5,6,7 };
	std::cin >> k;
	Solution names;
	names.rotate(nums, k);
	return 0;
}