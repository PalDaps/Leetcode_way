#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>

// 20 : 16 PM
// 04 / 09 / 2023 
// The first collision

class Solution {
public:
	// aabbbc 2 3 1
	// abbccc 1 2 3

	// abccc 1 1 3
	// aabb 2 2
	bool closeStrings(std::string word1, std::string word2) {
		std::sort(word1.begin(), word1.end());
		std::sort(word2.begin(), word2.end());
		std::unordered_map<char, int> n_word1;
		std::unordered_map<char, int> n_word2;
		std::unordered_set<int> collis;
		for (auto i : word1) {
			n_word1[i]++;
		}
		for (auto i : word2) {
			n_word2[i]++;
		}
		for (auto i : n_word1) {
			collis.insert(i.second);
		}
		for (auto i : n_word2) {
			collis.insert(i.second);
		}

		return n_word1.size() == collis.size() && n_word2.size() == collis.size();
	}
};

int main() {
	Solution daps;
	std::string test1 = "abc";
	std::string _test1 = "bca";
	std::cout << daps.closeStrings(test1, _test1);
	return 0;
}