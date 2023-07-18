#include <iostream>

// 3 : 06 PM
// 7 / 18 / 2023 / The first mine TBS solution!!!
class Solution {
public:
	bool isSubsequence(std::string s, std::string t) {
		int j = 0;
		for (int i = 0; i < t.size(); i++) {
			if (t[i] == s[j]) j++;
		}
		return j == s.size();
	}
};