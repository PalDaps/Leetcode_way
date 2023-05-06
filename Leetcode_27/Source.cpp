#include <iostream>
#include <vector>

class Solution
{
public:
	int removeElement(std::vector<int>& nums, int val)
	{
		std::vector<int> nums_new;
		int counter = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == val)
			{
				counter++;
			}
			else
				nums_new.push_back(nums[i]);
		}
		for (int i = 0; i < nums_new.size(); i++)
		{
			nums[i] = nums_new[i];
		}
		for (int i = nums_new.size(); i < nums.size(); i++)
		{
			nums[i] = 0;
		}
		std::cout << nums.size() - counter << ", nums = [";
		for (int i = 0; i < nums_new.size(); i++)
		{
			std::cout << nums[i] << ", ";
		}
		for (int i = 0; i < counter - 1; i++)
		{
			std::cout << "_, ";
		}
		std::cout << "_]";
		return nums.size() - counter;
	}
};

int main()
{
	std::vector<int> a = { 3, 2, 2, 3 };
	Solution daps;
	daps.removeElement(a, 3);
	return 0;
}