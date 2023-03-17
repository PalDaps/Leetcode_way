#include <iostream>
#include <vector>

class Solution
{
public:
	void rotate(std::vector<int>& nums, int k)
	{
		int size_of_nums = size(nums);
		int index_of_last = size(nums)-1;
		for ( int j = 0; j < k; j++ )
		{
			for (int i = index_of_last; i >= 1; i--)
			{
				int temp = nums[(i+1) % size_of_nums];
				nums[(i + 1) % size_of_nums] = nums[i % size_of_nums];
				nums[i % size_of_nums] = temp;
			}
		}
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