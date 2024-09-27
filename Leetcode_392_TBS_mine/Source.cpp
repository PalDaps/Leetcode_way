#include <iostream>

/*
Идея: пройтись по массиву слова t. И последовательно смотреть совпадают ли символы
подстроки и слова.
*/
// 3 : 06 PM
// 7 / 18 / 2023 / The first mine TBS solution!!!

//class Solution {
//public:
//	bool isSubsequence(std::string s, std::string t) {
//		int j = 0;
//		for (int i = 0; i < t.size(); i++) {
//			if (t[i] == s[j]) j++;
//		}
//		return j == s.size();
//	}
//};

// 12 : 36 PM
// 7 / 24 / 2023

// 1 : 20 PM / 22
// 7 / 26 / 2023 / SUCCESS
// I forgot the condition of problem

class Solution {
public:
	bool isSubsequance(std::string s, std::string t) {
		int j = 0;
		for (int i = 0; i < t.size(); i++) {
			if (t[i] == s[j]) j++;
		}
		return j == s.size();
	}
};

int main() {

	return 0;
}