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

// 12 : 05 PM
// 7 / 24 / 2023 / SUCCESS

// 9 : 36 AM / 3
// 7 / 26 / 2023 / SUCCESS
// In the train

// 11 : 02 PM / after a two week
// 8 / 5 / 2023 / SUCCESS
// Perfect!

// 10 : 58 PM / after a two week
// 8 / 5 / 2023 / SUCCESS
// I remember this task and the essence of its solution perfectly

class Solution {
public:
	int maxArea(std::vector<int>& height) {
		int l = 0;
		int r = height.size() - 1;
		int sq = 0;
		while (l < r) {
			sq = std::max(sq, (r - l) * std::min(height[l], height[r]));
			if (height[l] < height[r]) l++;
			else r--;
		}
		return sq;

	}
};

int main() {
	return 0;
}