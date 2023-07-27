#include <iostream>
#include <vector>

class Solution {
public:
	void rotate(std::vector<int>& nums, int k) {
		k %= nums.size();
		reverseRotate(nums, 0, nums.size() - 1);
		reverseRotate(nums, 0, k - 1);
		reverseRotate(nums, k, nums.size() - 1);

	}
	void reverseRotate(std::vector<int>& nums, int start, int end) {
		while (start < end) {
			int temp = nums[start];
			nums[start] = nums[end];
			nums[end] = temp;
			start++;
			end--;
		}
	}
};


// 14 : 44 PM / 1
// 7 / 15 / 2023 / SUCCESS

// 6 : 18 PM
// 7 / 17 / 2023 / SUCCESS

// 12 : 20 PM
// 7 / 24 / 2023 / SUCCESS
// I remember, but I still don't understand the meaning of this solution

// 10 : 37 AM / 10
// 7 / 26 / 2023 / SUCCESS

class Solution {
public:
	void rotate(std::vector<int>& nums, int k) {
		k %= nums.size();
		reverseMine(nums, 0, nums.size() - 1);
		reverseMine(nums, 0, k - 1);
		reverseMine(nums, k, nums.size() - 1);
	}

	void reverseMine(std::vector<int>& nums, int begin, int end) {
		while (begin < end) {
			int temp = nums[begin];
			nums[begin] = nums[end];
			nums[end] = temp;
			begin++;
			end--;
		}
	}
};
int main() {
	std::cout << "HELLO, world!";
	return 0;
}