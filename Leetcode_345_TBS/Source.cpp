#include <iostream>

class Solution {
public:
	std::string reverseVowels(std::string s) {
		int i = 0, j = s.size() - 1;
		while (i < j) {
			i = s.find_first_of("aeiouAEIOU", i);
			j = s.find_last_of("aeiouAEIOU", j);
			if (i < j) std::swap(s[i++], s[j--]);
		}
		return s;
	}
};