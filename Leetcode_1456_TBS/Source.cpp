#include <iostream>

// The first TBS solution
// 5 : 50 PM
// 7 / 27 / 2023 / SUCCESS
// I think I understood the meaning of the solution
// need after a 5 minute repeat

//class Solution {
//public:
//	int vowels[26] = { 1,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1 };
//	int maxVowels(std::string s, int k) {
//		int max_vow = 0;
//		for (auto i = 0, curr_vow = 0; i < s.size(); i++) {
//			curr_vow += vowels[s[i] - 'a'];
//			if (i >= k) {
//				curr_vow -= vowels[s[i] - 'a'];
//			}
//			max_vow = std::max(max_vow, curr_vow);
//		}
//		return max_vow;
//	}
//};

// 3 : 16 PM
// 7 / 28 / 2023 / The failure
// And if you skip the repetition after 5 minutes and after an hour, 
// then after a day it is already difficult to restore the solution.
// i forgot the curr_vow -= vowels[s[i-k] - 'a'];

//class Solution {
//public:
//    int vowels[26] = { 1,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1 };
//    int maxVowels(std::string s, int k) {
//        int sum = 0;
//        for (int i = 0, curr_vow = 0; i < s.size(); i++) {
//            curr_vow += vowels[s[i] - 'a'];
//            if (i >= k) {
//                curr_vow -= vowels[s[i - k] - 'a'];
//            }
//            sum = std::max(sum, curr_vow);
//        }
//        return sum;
//    }
//};

// 3 : 36 PM / after a 5 minute
// 7 / 28 / 2023 / SUCCESS

class Solution {
public:
    int vowels[26] = { 1,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1 };
    int maxVowels(std::string s, int k) {
        int max = 0;
        for (int i = 0, curr_vow; i < s.size(); i++) {
            curr_vow += vowels[s[i] - 'a'];
            if (i >= k)
                curr_vow -= vowels[s[i - k] - 'a'];
            max = std::max(max, curr_vow);
        }
        return max;
    }
};

// 5 : 00 PM 
// 7 / 28 / 2023 / SUCCESS

// 11 : 28 PM / after a 2 day
// 7 / 29 / 2023 / SUCCESS

// 10 : 24 PM / after a week
// 8 / 5 / 2023 / SUCCESS

// 11 : 15 PM
// 8 / 10 / 2023 / SUCCESS
// But I'm already starting to forget

// 11 : 19 PM
// 8 / 10 / 2023 / SUCCESS

// 23 : 47 PM
// 27 / 08 / 2023 / SUCCESS



int main() {
    std::string test = "abciiidef";
    Solution daps;
    daps.maxVowels(test, 3);
    return 0;
}