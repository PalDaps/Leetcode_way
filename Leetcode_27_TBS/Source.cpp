#include <iostream>
#include <vector>

//class Solution
//{
//public:
//	int removeElement(std::vector<int>& nums, int val)
//	{
//		int count = 0;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			if (nums[i] != val)
//			{
//				nums[count++] = nums[i];
//				// count++;
//			}
//		}
//		return count;
//	}
//};

// 7 / 10 / 2023 Remember The failure.

// after a 10 min. The failure
// 7 / 10 / 2023

// 7 / 12 / 2023 The Failure

// 7 / 14 / 2023 The Failure
// fucking blyat

// after 50 min
// 7 / 14 / 2023 / The SUCCESS!

// after 3 hours
// 7 / 14 / 2023 / The SUCCESS!

// after 2 hours 7 : 45 PM
// 7 / 14 / 2023 / SUCCESS

// 4 : 51 PM / 21
// 7 / 15 / 2023 / SUCCESS

// 11 : 59 AM / 16
// 7 / 26 / 2023 / SUCCESS

// 23 : 45 PM
// 05 / 09 / 2023 / SUCCESS

class Solution {
public:
	int removeElement(std::vector<int>& nums, int target) {
		int c = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] != target) nums[c++] = nums[i];
		}
		return c;
	}
};

int main()
{
	Solution daps;
	std::vector<int> mass = { 3, 2, 2, 3 };
	daps.removeElement(mass, 3);
	return 0;
}