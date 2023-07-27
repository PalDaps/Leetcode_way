#include <iostream>

// The first TBS solution
// 5 : 50 PM
// 7 / 27 / 2023 / SUCCESS
// I think I understood the meaning of the solution
// need after a 5 minute repeat

class Solution {
public:
	int vowels[26] = { 1,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1 };
	int maxVowels(std::string s, int k) {
		int max_vow = 0;
		for (auto i = 0, curr_vow = 0; i < s.size(); i++) {
			curr_vow += vowels[s[i] - 'a'];
			if (i >= k) {
				curr_vow -= vowels[s[i] - 'a'];
			}
			max_vow = std::max(max_vow, curr_vow);
		}
		return max_vow;
	}
};