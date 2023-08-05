#include <iostream>
#include <vector>

// The first
// 6 : 02 PM
// 7 / 22 / 2023

//class Solution {
//public:
//	bool increasingTriplet(std::vector<int>& nums) {
//		int left = INT_MAX;
//		int middle = INT_MAX;
//		for (auto i : nums) {
//			if (i <= left) left = i;
//			else if (i <= middle) middle = i;
//			else return true;
//		}
//		return false;
//	}
//};

// 6 : 20 PM / After a 18 minute
// 7 / 22 / 2023 / SUCCESS

// 4 : 20 PM / After a day
// 7 / 23 / 2023 / SUCCESS

// 12 : 08 PM
// 7 / 24 / 2023 / SUCCESS

// 12 : 54 PM / 19
// 7 / 26 / 2023 / SUCCESS

// 3 : 14 PM
// 7 / 27 / 2023 / I understood the meaning of this decision
// I understood the meaning of this decision

// 11 : 47 PM / after a two week
// 8 / 5 / 2023 / SUCCESS


class Solution {
public:
	bool increasingTripltet(std::vector<int> nums) {
		int left = INT_MAX;
		int middle = INT_MAX;
		for (auto i : nums) {
			if (i <= left) left = i;
			else if (i <= middle) middle = i;
			else return true;
		}
		return false;
	}
};

int main() {
	return 0;
}