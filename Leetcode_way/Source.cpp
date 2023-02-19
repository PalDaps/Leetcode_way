#include <iostream>
#include <vector>

//
// Given an array nums. We define a running sum of an array as 
// runningSum[i] = sum(nums[0]…nums[i]).Return the running 
// sum of nums.
//
class solution
{
	public:
        std::vector<int> runningSum(std::vector<int>& nums) 
        {
            int sum = 0;
            std::vector<int> dums;
            for (int i = 0; i < nums.size(); ++i) 
            {
                sum = nums[i] + sum;
                dums.push_back(sum);
            }

            return dums;
        }

};

int main()
{
    std::vector<int> nums = { 1, 2, 3, 4 };
    solution test;
    std::vector<int> result = test.runningSum(nums);
    for (int i = 0; i < result.size(); ++i)
    {
        std::cout << result[i] << " ";
    }
	return 0;
}