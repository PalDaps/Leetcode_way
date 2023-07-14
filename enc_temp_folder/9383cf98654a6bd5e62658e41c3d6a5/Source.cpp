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