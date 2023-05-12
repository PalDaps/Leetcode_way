#include <iostream>
#include <vector>

class Solution
{
public:
	int removeDuplicates(std::vector<int>& nums)
	{
		if (nums.size() == 1) return 1;
		int first = nums[0];
		int j = 0;
		for (int i = 0; i < nums.size()-1; i++)
		{
			if (nums[i] != nums[i + 1])
			{
				nums[j] = nums[i];
				j++;
			}
		}
		if (nums[nums.size() - 2] != nums[nums.size() - 1])
			nums[j] = nums[nums.size() - 1];
		if (nums[nums.size() - 2] == nums[nums.size() - 1])
			nums[j] = nums[nums.size() - 2];
		//for (auto i : nums)
			//std::cout << i << " ";
		return j+1;
	}
};

int main()
{
	std::vector<int> anime = { 1, 1, 2, 2};
	Solution daps;
	std::cout << daps.removeDuplicates(anime);
	return 0;
}