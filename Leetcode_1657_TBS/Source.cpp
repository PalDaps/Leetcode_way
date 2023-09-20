#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

class Solution {
public:
	bool closeSrtings(std::string word1, std::string word2) {
		std::vector<int> v1(26, 0);
		std::vector<int> v2(26, 0);
		std::unordered_set<char> s1;
		std::unordered_set<char> s2;
		for (auto i : word1) {
			v1[i - 'a']++;
			s1.insert(i);
		}
		for (auto i : word2) {
			v2[i - 'a']++;
			s2.insert(i);
		}
		std::sort(v1.begin(), v1.end());
		std::sort(v2.begin(), v2.begin());
		return s1 == s2 && v1 == v2;
	}
};

// 13 : 06 PM
// 20 / 09 / 2023 / SUCCESS

int main() {
	return 0;
}