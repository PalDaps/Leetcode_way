#include <iostream>
#include <vector>

// The first
// 6 : 02 PM
// 7 / 22 / 2023

class Solution {
public:
	bool increasingTriplet(std::vector<int>& nums) {
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

// 6 : 20 PM / After a 18 minute
// 7 / 22 / 2023 / SUCCESS

int main() {
	return 0;
}