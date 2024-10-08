#include <iostream>
#include <vector>
#include <algorithm>


//class Solution {
//public:
//	std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
//		std::vector<bool> result;
//		int max = *std::max_element(candies.begin(), candies.end());
//		for (int i = 0; i < candies.size(); i++) {
//			if (candies[i] + extraCandies >= max)
//				result.push_back(true);
//			else
//				result.push_back(false);
//		}
//		return result;
//	}
//};

// I thought this task was easy. I didn't repeat the decision after 10-15 
// minutes and didn't think about it for 4 days, in the end I completely 
// forgot TBS, but my decision was slowly remembered.


// 6/13/2023
// the failure
//class Solution {
//public:
//    std::vector<bool> kidsWithCandies(std::vector<int>&candies, int extraCandies) {
//        std::vector<bool> result;
//        int max = *std::max_element(candies.begin(), candies.end());
//        for (int i = 0; i < candies.size(); i++) {
//            if (candies[i] + extraCandies >= max)
//                result.push_back(true);
//            else
//                result.push_back(false);
//        }
//        return result;
//    }
//};

// 6/16/2023
// success 100%!
// For some reason I remember it!
//class Solution {
//public:
//    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
//        int max = *std::max_element(candies.begin(), candies.end());
//        std::vector<bool> result;
//        for (int i = 0; i < candies.size(); i++) {
//            if (candies[i] + extraCandies >= max)
//                result.push_back(true);
//            else
//                result.push_back(false);
//        }
//        return result;
//    }
//};

// 6 / 21 / 2023
// success 100%!

// success!!! 7 / 4 / 2023;


// 7 / 8 / 2023
// SUCCESS
// It went much more productively to the music!

// 7 / 12 / 2023
// SUCCESs
// x2 It went much more productively to the music!

// 3 : 12 PM / 8
// 7 / 15 / 2023 / SUCCESS

// 10 : 04 AM / 6
// 7 / 26 / 2023 / SUCCESS

// 14 : 54 PM
// 01 / 09 / 2023 / SUCCESS

// 18 : 18 PM
// 03 / 01 / 2024 / SUCCESS

// 20 : 23 PM
// 22 / 08 / 2024 / SUCCESS


class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int> nums, int extraCandies) {
        int max = *std::max_element(nums.begin(), nums.end());
        std::vector<bool> res;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] + extraCandies >= max) res.push_back(true);
            else res.push_back(false);
        }
        return res;
    }
};

int main() {
    Solution daps;
    std::vector<int> test = { 2, 3, 5, 1, 3 };
    int extra = 3;
    daps.kidsWithCandies(test, extra);
    return 0;
}