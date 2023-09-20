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

// 20 : 01 PM
// 16 / 09 / 2023 / The failure

// 20 : 20 PM
// 16 / 09 / 2023 / SUCCESS
// After a 20 minute

// 12 : 48 PM
// 20 / 09 / 2023 / SUCCESS

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
	//int a = 0, b = 0;
	//for (int i = 0; i < 100; i++) {
	//	int l = rand() % 10;
	//	int r = rand() % 10 + 11;
	//	a = l + (r - l) / 2;
	//	std::cout << "l : " << l << " r : " << r << " res1 : " << a;
	//	std::cout << std::endl;
	//	b = (l + (r - l)) / 2;
	//	std::cout << "l : " << l << " r : " << r << " res2 : " << b;
	//	std::cout << std::endl;
	//	if (a != b) {
	//		std::cout << "FAIL" << std::endl;
	//	}
	//}
	return 0;
}