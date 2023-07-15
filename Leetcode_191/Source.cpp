#include <iostream>

class Solution {
public:
	int hammingWeight(uint32_t n) {
		int counter = 0;
		for (int i = 0; i < 32; i++) {
			uint32_t temp = n;
			temp = temp >> i;
			counter = counter + (temp & 1);
		}
		return counter;
	}
};


// remembers it 7 / 4 /2023 Success!;

// 7 / 12 / 2023 / SUCCESS!

// 2 : 59 PM / 5
// 7 / 15 / 2023 / SUCCESS!

int main() {
	uint32_t n = 0b1100;
	// std::cout << n << std::endl;
	uint32_t b = 0001;
	uint32_t res = n & b;
	// std::cout << res << std::endl;
	// n = n >> 1; // ×ÒÎ áëèí?
	uint32_t c = 1;
	// n = n >> c;
	// std::cout << n;
	Solution daps;
	std::cout << daps.hammingWeight(n);
}