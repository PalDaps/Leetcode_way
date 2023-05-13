#include <iostream>
#include <vector>

class Solution
{
public:
	int removeDuplicates(std::vector<int>& nums)
	{
		int counter = 0;
		for (int i = 1; i < nums.size(); i++)
		{
			if (nums[i - 1] == nums[i]) counter++;
			else nums[i - counter] = nums[i];
		}
		return nums.size() - counter;
	}
};

int main()
{
	Solution daps;
	std::vector<int> anime = { 1,1,2,2 };
	daps.removeDuplicates(anime);

	return 0;
}