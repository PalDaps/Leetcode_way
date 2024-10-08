#include <iostream>
#include <string>
/*
class Solution {
public:
	std::string mergeAlternately(std::string w1, std::string w2) {
		std::string result = "";
		int n = w1.size(), m = w2.size(), i = 0, j = 0;
		while (i < n || j < m) {
			if (i < n)
				result.push_back(w1[i++]);
			if (j < m)
				result.push_back(w2[j++]);
		}
		return result;
	}
};
*/

// after 15 min
/*
class Solution {
public:
	std::string mergeAlternately(std::string a, std::string b) {
		std::string result = "";
		int n = a.size(), m = b.size(), i = 0, j = 0;
		while (i < n || j < m) {
			if (i < n)
				result.push_back(a[i++]);
			if (j < m)
				result.push_back(b[j++]);
		}
		return result;
	}

};
*/
// after a day
/*
class Solution {
public:
	std::string mergeAlternately(std::string word1, std::string word2) {
		std::string result = "";
		int n = word1.size(), m = word2.size(), i = 0, j = 0;
		while (i < n || j < m) {
			if (i < n) {
				result.push_back(word1[i++]);
			}
			if (j < m) {
				result.push_back(word2[j++]);
			}
		}
		return result;
	}
};
*/
// after 2 days
/*
class Solution {
public: 
	std::string mergeAlternately(std::string word1, std::string word2) {
		std::string result = "";
		int n = word1.size(), m = word2.size(), i = 0, j = 0;
		while (i < n || j < m) {
			if (i < n)
				result.push_back(word1[i++]);
			if (j < m)
				result.push_back(word2[j++]);
		}
		return result;
	}
};
*/

// after 5 days check
// 6/11/2023 I still remember it!
/*
class Solution {
public:
	std::string mergeAlternately(std::string word1, std::string word2) {
		std::string result = "";
		int n = word1.size();
		int m = word2.size();
		int i = 0, j = 0;
		while (i < n || j < m) {
			if (i < n)
				result.push_back(word1[i++]);
			if (j < m)
				result.push_back(word2[j++]);
		}
		return result;
	}
};
*/
// success
// 6/13/2023

//class Solution {
//public:
//	std::string mergeAlternately(std::string word1, std::string word2) {
//		int n = word1.size();
//		int m = word2.size();
//		int i = 0, j = 0;
//		std::string result = "";
//		while (i < n || j < m) {
//			if (i < n)
//				result.push_back(word1[i++]);
//			if (j < m)
//				result.push_back(word2[j++]);
//		}
//		return result;
//	}
//};

// 6/16/2023
// succes!! I remembered it very easily and quickly!
//class Solution {
//public:
//	std::string mergeAlternately(std::string word1, std::string word2) {
//		int n = word1.size(), m = word2.size();
//		int i = 0, j = 0;
//		std::string result = "";
//		while (i < n || j < m) {
//			if (i < n) result.push_back(word1[i++]);
//			if (j < m) result.push_back(word2[j++]);
//		}
//		return result;
//	}
//};

// 6 / 21 / 2023
// SUCCESS!!!

// 7 / 4 / 2023 
// SUCCESS!!! 
// I still remember!


// 7 / 8 / 2023
// SUCCESS!
// In fact, it feels like because of memorizing other tasks, I'm starting to forget the solution of these hard tasks

// 7 / 12 / 2023
// SUCCESS!
	
// 3 : 03 PM / 6
// 7 / 15 / 2023 / SUCCES

// 10 : 30 AM / 9
// 7 / 26 / 2023 / SUCCESS

// 14 : 50 PM
// 01 / 09 / 2023 / SUCCESS

// 17 : 55 PM
// 03 / 01 / 2024 / SUCCESS

// 21:06 PM
// 19 / 08 / 2024 / SUCCESS


class Solution {
public:
	std::string mergeAlternately(std::string str1, std::string str2) {
		int n = str1.size(), m = str2.size(), i = 0, j = 0;
		std::string res = "";
		res.substr();
		while (i < n || j < m) {
			if (i < n) res += str1[i++];
			if (j < m) res += str2[j++];
		}
		return res;
	}
};
int main() {
	std::string a = "abc", b = "pq";
	Solution daps;
	std::cout << daps.mergeAlternately(a, b);
	return 0;
}