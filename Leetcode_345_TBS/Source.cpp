#include <iostream>

//class Solution {
//public:
//	std::string reverseVowels(std::string s) {
//		int i = 0, j = s.size() - 1;
//		while (i < j) {
//			i = s.find_first_of("aeiouAEIOU", i);
//			j = s.find_last_of("aeiouAEIOU", j);
//			if (i < j) std::swap(s[i++], s[j--]);
//		}
//		return s;
//	}
//};


// after 20 min 6/16/2023
// succes
class Solution {
public:
	std::string reversVowels(std::string s) {
		/*int i = 0, j = s.size() - 1;
		while (i < j) {
			i = s.find_first_of("aeiouAEIOU", i);
			j = s.find_last_of("aeiouAEIOU", j);
			if (i < j) std::swap(s[i++], s[j--]);
		}
		return s;*/
		int i = 0, j = s.size() - 1;
		while (i < j) {
			while (i < j && !isVowel(s[i])) i++;
			while (i < j && !isVowel(s[j])) j--;
			if (i < j) std::swap(s[i++], s[j--]);
		}
		return s;
	}
private:
	bool isVowel(char c) {
		return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' ||
			c == 'E' || c == 'I' || c == 'O' || c == 'U';
	}
};