#include <iostream>
#include <vector>

//class Solution
//{
//public:
//	std::vector<int> productExceptSelf(std::vector<int>& nums) {
//		std::vector<int> res(nums.size(), 1);
//		for (int i = 0, suf = 1, pre = 1, n = nums.size(); i < n; i++) {
//			std::cout << "START! i = " << i << std::endl;
//			res[i] *= pre;
//			std::cout << "res[i] *= pre : " << res[i] << " " << pre << std::endl;
//			pre *= nums[i];
//			std::cout << "pre *= nums[i] : " << pre << " " << nums[i] << std::endl;
//			res[n - 1 - i] *= suf;
//			std::cout << "res[n - 1 - i] *= suf : " << res[n - 1 - i] << " " << suf << std::endl;
//			suf *= nums[n - 1 - i];
//			std::cout << "suf *= nums[n - 1 - i] : " << suf << " " << nums[n - 1 - i] << std::endl;
//		}
//		for (auto i : res)
//			std::cout << i << " ";
//		return res;
//	}
//};


// 7 / 8 / 2023
// THE FAILURE!

//class Solution {
//public:
//    std::vector<int> productExceptSelf(std::vector<int>& nums) {
//        std::vector<int> res(nums.size(), 1);
//        for (int i = 0, pre = 1, suf = 1, n = nums.size(); i < n; i++) {
//            res[i] *= pre;
//            pre *= nums[i];
//            res[n - 1 - i] *= suf;
//            suf *= nums[n - 1 - i];
//        }
//        return res;
//    }
//};

// after an hour checked and try to solve this problem. And it was a success!
// 7 / 8 / 2023

// 7 / 12 / 2023 SUCCESS! Incredible

// 4 : 07 PM / 12
// 7 / 15 / 2023 / SUCCESS

// 12 : 24 PM 
// 7 / 24 / 2023 / SUCCESS

// 11 : 45 / 14
// 7 / 26 / 2023 / SUCCESS

// 11 : 59 PM
// 8 / 5 / 2023 / SUCCESS

// 23 : 34 PM
// 27 / 08 / 2023 / SUCCESS

/*
class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int> nums) {
        std::vector<int> res(nums.size(), 1);
        for (int i = 0, pre = 1, suf = 1, n = nums.size(); i < n; i++) {
            res[i] *= pre;
            pre *= nums[i];
            res[n - 1 - i] *= suf;
            suf *= nums[n - 1 - i];
        }
        return res;
    }
};
*/

class Solution
{
public:
    std::vector<int> productExceptSelf(std::vector<int>& Nums)
    {
        std::vector<int> Product(Nums.size(), 1);
        for (size_t i = 1; i < Nums.size(); i++)
        {
            Product[i] = Product[i - 1] * Nums[i - 1];
        }
        for (int i = Nums.size() - 2, right = Nums[Nums.size() - 1]; i >= 0; --i)
        {
            Product[i] = Product[i] * right;
            right *= Nums[i];
        }

        return Product;
    }
};

// 17 : 11 PM
// 25 / 08 / 2024 / SUCCESS


int main() {
	std::vector<int> test = { 1,2,3,4 };
	Solution daps;
	daps.productExceptSelf(test);
	return 0;
}