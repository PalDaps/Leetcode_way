#include <iostream>
#include <vector>

//class Solution
//{
//public:
//	int removeDuplicates(std::vector<int>& nums)
//	{
//		int counter = 0;
//		for (int i = 1; i < nums.size(); i++)
//		{
//			if (nums[i - 1] == nums[i]) counter++;
//			else nums[i - counter] = nums[i];
//		}
//		return nums.size() - counter;
//	}
//};


// 7 / 10 / 2023 Remember. The failure.


// After a 10 min
// 7 / 10 / 2023 Succes!

// 7 / 12 / 2023 The Failure

// 7 / 14 / 2023 The Failure

// after 50 min
// 7 / 14 / 2023 SUCCES!

// after 3 hours
// 7 / 14 / 2023 / SUCCES!

// after 2 hours 7 :42 PM
// 7 / 14 / 2023 / SUCCES

// 4 : 48 PM / 20
// 7 / 15 / 2023 / SUCCESS

// 11 : 52 AM / 15
// 7 / 26 / 2023 / SUCCESS
// But i make a mistake in line if (nums[i - 1] == nums[i]) c++;

class Solution {
public:
	int removeDuplicates(std::vector<int>& nums) {
		int c = 0;
		for (int i = 1; i < nums.size(); i++) {
			if (nums[i - 1] == nums[i]) c++;
			else nums[i - c] = nums[i];
		}
		for (auto i : nums)
			std::cout << i << " ";
		return nums.size() - c;
	}
};



int main()
{
	Solution daps;
	std::vector<int> anime = { 1,1,2,2 };
	daps.removeDuplicates(anime);

	return 0;
}