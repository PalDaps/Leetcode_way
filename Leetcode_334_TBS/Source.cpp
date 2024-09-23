#include <iostream>
#include <vector>

/*
Идея: Есть три числа left, middle, right. Если right > middle > left по возрастанию, то можно
ввести left = INT_MAX и обновлять его как только элемент массива <= left. Если это не выполняется
запускать проверку на middle элемент и обновлять его.
*/

// The first
// 6 : 02 PM
// 7 / 22 / 2023

//class Solution {
//public:
//	bool increasingTriplet(std::vector<int>& nums) {
//		int left = INT_MAX;
//		int middle = INT_MAX;
//		for (auto i : nums) {
//			if (i <= left) left = i;
//			else if (i <= middle) middle = i;
//			else return true;
//		}
//		return false;
//	}
//};

// 6 : 20 PM / After a 18 minute
// 7 / 22 / 2023 / SUCCESS

// 4 : 20 PM / After a day
// 7 / 23 / 2023 / SUCCESS

// 12 : 08 PM
// 7 / 24 / 2023 / SUCCESS

// 12 : 54 PM / 19
// 7 / 26 / 2023 / SUCCESS

// 3 : 14 PM
// 7 / 27 / 2023 / I understood the meaning of this decision
// I understood the meaning of this decision

// 11 : 47 PM / after a two week
// 8 / 5 / 2023 / SUCCESS

// 23 : 37 PM
// 27 / 08 / 2023 / SUCCESS

// 20 : 47 PM
// 23 / 09 / 2024 / The failure

/*
class Solution {
public:
	bool increasingTripltet(std::vector<int> nums) {
		int left = INT_MAX;
		int middle = INT_MAX;
		for (auto i : nums) {
			if (i <= left) left = i;
			else if (i <= middle) middle = i;
			else return true;
		}
		return false;
	}
};
*/

class Solution
{
public:
    bool increasingTriplet(std::vector<int>& Nums)
    {
        int Left = INT_MAX;
        int Middle = INT_MAX;
        int Right = INT_MAX;
        for (size_t i = 0; i < Nums.size(); i++)
        {
            if (Left >= Nums[i]) Left = Nums[i];
            else if (Middle >= Nums[i]) Middle = Nums[i];
            else return true;
        }
        return false;
    }
};
int main() {
    Solution daps;
    std::vector<int> Nums = { 1, 1, 1, 1, 1 };
    daps.increasingTriplet(Nums);
	return 0;
}