#include <iostream>

class Solution {
public:
	int strStr(std::string haystack, std::string needle) {
		for (int i = 0; ; i++) {
			for (int j = 0; ; j++) {
				if (j == needle.size()) return i;
				if (i + j == haystack.size()) return -1;
				if (needle[j] != haystack[i + j]) break;
			}
		}
	}
};

// after a 5 minute 7 : 00 PM
// 7 / 14 / 2023 / SUCCESS!
// But this solution is quite difficult to understand, maybe I can do it when I fully learn it

// after a 40 minute 7 : 40 PM
// 7 / 14 / 2023 / SUCCESS

// 2 : 53 PM / 4
// 7 / 15 / 2023 / SUCCESS

int main() {
	Solution daps;
	std::string a = "sadbutsad";
	std::string b = "sad";
	std::string c = "leetcode";
	std::string d = "leeto";
	std::string x = "hello";
	std::string y = "ll";
	std::string v = "abc";
	std::string n = "c";
	std::cout << daps.strStr(a, b);
	return 0;
}