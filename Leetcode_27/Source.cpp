#include <iostream>
#include <vector>

class Solution
{
public:
	int removeElement(std::vector<int>& nums, int val)
	{
		std::vector<int> indexes;
		int counter = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == val)
			{

				counter++;
				indexes.push_back(i);
			}
		}

		for (int i = 0; i < nums.size(); i++)
		{

		}

		std::cout << nums.size() - counter << ", nums = [";
		int j = 0;
		for (int i = 0; i < nums.size() - 1; i++)
		{
			if (i == indexes[j])
			{
				j++;
			}
			else
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