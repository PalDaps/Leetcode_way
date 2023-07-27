#include <iostream>
#include <vector>

//class Solution
//{
//public:
//	int searchInsert(std::vector<int>& nums, int target)
//	{
//		int l = 0;
//		int r = nums.size() - 1;
//		while (l < r)
//		{
//			int middle = (l + (r - l)) / 2; // One of the most difficult lines to understand in this code. It is needed to avoid overflow.
//			if (nums[middle] == target)
//				return middle;
//			else if (target > nums[middle])
//				l = middle + 1;
//			else
//				r = middle;
//		}
//		return nums[l] < target ? l + 1 : l; // Also an interesting line, which is difficult to understand. In general, it checks the last element that has not been checked by the main algorithm.
//	}
//
//};

// 2 : 50 PM / 3
// 7 / 15 / 2023 / SUCCESS!

// 6 : 12 PM
// 7 / 17 / 2023 / SUCCESS!

// 1 : 13 PM / 21
// 7 / 26 / 2023 / SUCCESS
// but i forgot nums[l] < target ? l + 1 : l;
class Solution {
public:
	int searchInseart(std::vector<int>& nums, int target) {
		int n = nums.size();
		int l = 0;
		int r = n - 1;
		while (l < r) {
			int middle = l + (r - l) / 2;
			if (nums[middle] == target) return middle;
			else if (nums[middle] > target) r = middle;
			else l = middle + 1;
		}
		return nums[l] < target ? l + 1 : l;
	}
};

int main()
{
	return 0;
}