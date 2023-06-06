#include <iostream>
#include <string>

class Solution {
public:
	std::string mergeAlternately(std::string word1, std::string word2) {
		std::string result = "";
		if (word1.size() <= word2.size())
			result = word1 + word2;
		else result = word2 + word1;
		for (int i = 0, k = 1, j = 0; i < std::min(word1.size(), word2.size()); i++, j+=2, k+=2) {
			result[j] = word1[i];
			result[k] = word2[i];
		}
		return result;
	}
};


int main() {
	std::string a = "abcd";
	std::string b = "pq";
	Solution daps;
	std::cout << daps.mergeAlternately(a, b);
	return 0;
}