#include <iostream>
#include <vector>

//
// Given an array nums. We define a running sum of an array as 
// runningSum[i] = sum(nums[0]…nums[i]).Return the running 
// sum of nums.
//

int main()
{
	int n = 0, sum = 0;
	std::cin >> n;
	std::vector<int> nums;
	std::vector<int> dums;
	for (int i = 0; i < n; ++i)
	{
		int temp = 0;
		std::cin >> temp;
		nums.push_back(temp);
		for (int i = 0; i < nums.size(); ++i)
		{
			sum = nums[i] + sum;
		}
		dums.push_back(sum);
		sum = 0;
	}
	for (int i = 0; i < dums.size(); ++i)
	{
		std::cout << dums[i] << " ";
	}
	return 0;
}