#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
	int compress(std::vector<char>& chars) {
		int indexAns = 0, index = 0;
		while (index < chars.size()) {
			char currentChar = chars[index];
			int count = 0;
			while (index < chars.size() && chars[index] == currentChar) {
				index++;
				count++;
			}
			chars[indexAns++] = currentChar;
			if (count != 1) {
				std::string s = std::to_string(count);
				for (auto i : s)
					chars[indexAns++] = i;
			}
		}
		return indexAns;
	}
};

// need after 15 min repeat this nice solution

// SUCCES!But it went hard.