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
				if (counter > 9) {
					std::vector<int> numbers = splitOnNumbers(counter);
					for (int j = numbers.size()-1; j >= 0; j--) {
						res.push_back(numbers[j] + 48);
					}
				}
				else if (counter != 1) res.push_back(counter + 48);
				counter = 0;
			}
		}
		counter++;
		res.push_back(chars[chars.size() - 1]);
		if (counter > 9) {
			std::vector<int> numbers = splitOnNumbers(counter);
			for (int j = numbers.size() - 1; j >= 0; j--) {
				res.push_back(numbers[j] + 48);
			}
		}
		else if ( counter != 1 ) res.push_back(counter + 48);
		chars = res;
		for (auto i : chars)
			std::cout << i << " ";
		std::cout << std::endl;
		return res.size();
	}
	std::vector<int> splitOnNumbersRecursive(int counter) {
		std::vector<int> split;
		if (counter == 0) return split;
		int d = counter % 10;
		splitOnNumbersRecursive(counter / 10);
		split.push_back(d);
		return split;
	}
	std::vector<int> splitOnNumbers(int counter) {
		std::vector<int> res;
		int temp = counter;
		int number = 0;
		while (temp > 0) {
			number = temp % 10;
			res.push_back(number);
			temp /= 10;
		}
		return res;
	}
};

int main() {
	Solution daps;
	std::vector<char> test = { 'a', 'a', 'b', 'b', 'c', 'c', 'c'};
	std::vector<char> test_2 = { 'a','c' };
	std::vector<char> test_3 = { 'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b' };
	std::vector<char> test_4 = { 'a','a','a','b', 'b','a','a' };
	daps.compress(test_4);
	/*std::vector<int> out = daps.splitOnNumbers(500);
	for (auto i : out)
		std::cout << i << " ";*/
	return 0;
}