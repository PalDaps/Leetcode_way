#include <iostream>

class Solution {
public:
	bool isSubsequence(std::string s, std::string t) {
		int j = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == t[j]) {
				j++;
			}
		}
		return j >= t.size();
	}
};

int main() {
	std::string s = "abc";
	std::string t = "ahbgdc";
	Solution daps;
 	std::cout << daps.isSubsequence(s, t);
	return 0;
}