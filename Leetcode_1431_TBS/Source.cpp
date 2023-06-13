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
class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>&candies, int extraCandies) {
        std::vector<bool> result;
        int max = *std::max_element(candies.begin(), candies.end());
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= max)
                result.push_back(true);
            else
                result.push_back(false);
        }
        return result;
    }
};

int main() {
    Solution daps;
    std::vector<int> test = { 2, 3, 5, 1, 3 };
    int extra = 3;
    daps.kidsWithCandies(test, extra);
    return 0;
}