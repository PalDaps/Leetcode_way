#include <iostream>
#include <vector>

class Solution
{
public:
	int removeElement(std::vector<int>& nums, int val)
	{
		int count = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] != val)
			{
				nums[count++] = nums[i];
				// count++;
			}
		}
		return count;
	}
};

// 7 / 10 / 2023 Remember The failure.

// after a 10 min. The failure
// 7 / 10 / 2023

// 7 / 12 / 2023 The Failure

int main()
{
	Solution daps;
	std::vector<int> mass = { 3, 2, 2, 3 };
	daps.removeElement(mass, 3);
	return 0;
}