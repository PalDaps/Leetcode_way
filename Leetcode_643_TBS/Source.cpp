#include <iostream>
#include <vector>

// The first collision with TBS problem on sliding window
// 1 : 44 PM
// 7 / 27 / 2023 
// According to the Editorial sliding window, it was 
// difficult to understand what it is, I'll try to figure out the code

//class Solution {
//public:
//	double findMaxAverage(std::vector<int>& nums, int k) {
//		double sum = 0;
//		for (int i = 0; i < k; i++) {
//			sum += nums[i];
//		}
//		double res = sum; 
//		for (int i = k; i < nums.size(); i++) {
//			sum += nums[i] - nums[i - k];
//			res = std::max(res, sum);
//		}
//		return res/k;
//	}
//};

// 2 : 42 PM / after a 30 minute
// 7 / 27 / 2023 / SUCCESS

// 11 : 38 AM / after a 2 day
// 7 / 29 / 2023 / The failure
// Mixed in memory with a non-TBS solution and it's over

// 11 : 58 AM / after a 30 min after failure
// 7 / 29 / 2023 / the failure

// 10 : 45 PM / after a week
// 8 / 5 / 2023 / The failure
// Need the repeat tomorrow

// 11 : 29 PM / after an hour
// 8 / 5 / 2023 / SUCCESS

// 11 : 09 PM
// 8 / 10 / 2023 / The failure
// I forgot to divide by k

// 21 : 17 PM
// 21 / 08 / 2023 / SUCCESS

//class A {
//public:
//	virtual void test() {
//		before();
//		std::cout << "test() from class A" << std::endl;
//		after();
//	}
//
//	virtual void before() {
//		// std::cout << "before() from class A" << std::endl;
//	}
//
//	virtual void after() {
//		// std::cout << "after() from class A" << std::endl;
//	}
//};

//class B : public A {
//public:
//	void caller() {
//		test();
//	}
//	void before() override {
//		std::cout << "before() from class B" << std::endl;
//	}
//	void after() override {
//		std::cout << "after() from class B" << std::endl;
//	}
//};

int main() {
	// Solution daps;
	std::vector<int> test = {1, 12, 4, 5};
	// std::cout << daps.findMaxAverage(test, 2);
	//B b;
	//b.caller();
	return 0;
}