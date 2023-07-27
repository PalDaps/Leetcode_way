#include <iostream>

// 4 : 40 PM / Memory Limit Exceeded
// 7 / 27 / 2023 / SUCCESS

class Solution {
public:
	int maxVowels(std::string s, int k) {
		int res = 0;
		for (int i = k; i < s.size()+1; i++) {
			res = std::max(res, sumVowels(s, i - k, i));
		}
		return res;
	}

	int sumVowels(std::string s, int begin, int end) {
		int c = 0;
		for (int i = begin; i < end; i++) {
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
				s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
				c++;
		}
		return c;
	}
};

// 4 : 46 PM
// 7 / 27 / 2023 / I felt like the link was saving me from memory, 
// but now another problem Time Limit Exceeded

int main() {
	std::string test = "abciiidef";
	std::string test2 = "weallloveyou";
	Solution daps;
	std::cout << daps.maxVowels(test2, 7);
	return 0;
}