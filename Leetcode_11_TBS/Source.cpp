#include <iostream>
#include <vector>


// 4 : 09 PM
// 7 / 19 / 2023
class Solution {
public:
	int maxArea(std::vector<int>& height) {
		int sq = 0;
		int l = 0;
		int r = height.size() - 1;
		while (l < r) {
			sq = std::max(sq, (r - l) * std::min(height[l], height[r]));
			if (height[l] < height[r]) {
				l++;
			}
			else
				r--;
		}
		return sq;
	}
};

// 5 : 50 PM
// 7 / 22 / 2023 / SUCCESS

// 4 : 21 PM
// 7 / 23 / 2023 / SUCCESS