#include <iostream>
#include <vector>

class Solution {
public:
	int compress(std::vector<char>& chars) {
		if (chars.size() == 1) return 1;
		std::vector<char> res;
		int counter = 0;
		for (int i = 1; i < chars.size(); i++) {
			counter++;
			char temp = chars[i - 1];
			if (chars[i] != chars[i - 1]) {
				res.push_back(chars[i - 1]);
				res.push_back(counter+48);
				counter = 0;
			}
		}
		res.push_back(chars[chars.size() - 1]);
		res.push_back(counter+1+48);
		chars = res;
		return res.size();
	}
	std::vector<int> splitNumbers(int counter) {
		std::vector<int> split;
		if (counter == 0) return split;
		int d = counter % 10;
		splitNumbers(counter / 10);
		split.push_back(d);
		return split;
	}
};

int main() {
	Solution daps;
	std::vector<char> test = { 'a', 'a', 'b', 'b', 'c', 'c', 'c'};
	std::vector<char> test_2 = { 'a','c' };
	// daps.compress(test);
	std::vector<int> out = daps.splitNumbers(12);
	for (auto i : out)
		std::cout << i << " ";
	return 0;
}