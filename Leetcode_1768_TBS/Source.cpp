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
// succes
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
class Solution {
public:
	std::string mergeAlternately(std::string word1, std::string word2) {
		int n = word1.size(), m = word2.size();
		int i = 0, j = 0;
		std::string result = "";
		while (i < n || j < m) {
			if (i < n) result.push_back(word1[i++]);
			if (j < m) result.push_back(word2[j++]);
		}
		return result;
	}
};

int main() {
	std::string a = "abc", b = "pq";
	Solution daps;
	std::cout << daps.mergeAlternately(a, b);
	return 0;
}