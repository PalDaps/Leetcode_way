#include <iostream>
#include <vector>
#include <unordered_map>


//class Solution
//{
//public:
//	std::vector<int> twoSum(std::vector<int>& nums, int target)
//	{
//		std::unordered_map<int, int> visited;
//		int len = nums.size();
//		for (int i = 0; i < len; ++i)
//		{
//			int n = nums[i];
//			int complement = target - n;
//			if (visited.count(complement))
//			{
//				return { visited[complement], i
//				};
//			}
//			visited[n] = i;
//		}
//		return {};
//	}
//};


//class Solution {
//public:
//	std::vector<int> twoSum(std::vector<int>& nums, int target) {
//		std::unordered_map<int, int> map;
//		for (int i = 0; i < nums.size(); i++) {
//			if (map.count(target - nums[i]))
//				return { map[target - nums[i]], i };
//			map[nums[i]] = i;
//		}
//		return {};
//	}
//};


// 
// to be repeated later after 10 min 7 / 4 / 2023 SUCCES!;

//class Solution {
//public:
//    std::vector<int> twoSum(std::vector<int>& nums, int target) {
//        std::unordered_map<int, int> map;
//        for (int i = 0; i < nums.size(); i++) {
//            int delta = target - nums[i];
//            if (map.count(delta))
//                return { map[delta], i };
//            map[nums[i]] = i;
//        }
//        return {};
//    }
//};


// after 30 min remember it. Succes!
//class Solution {
//public:
//    std::vector<int> twoSum(std::vector<int>& nums, int target) {
//        std::unordered_map<int, int> map;
//        for (int i = 0; i < nums.size(); i++) {
//            int delta = target - nums[i];
//            if (map.count(delta))
//                return { map[delta], i };
//            map[nums[i]] = i;
//        }
//        return {};
//    }
//};

// after a day 7 / 5 / 2023 SUCCES!
//class Solution {
//public:
//    std::vector<int> twoSum(std::vector<int>& nums, int target) {
//        std::unordered_map<int, int> map;
//        for (int i = 0; i < nums.size(); i++) {
//            int delta = target - nums[i];
//            if (map.count(delta))
//                return { map[delta], i };
//            map[nums[i]] = i;
//        }
//        return {};
//    }
//};

// after a 2 day 7 / 7 / 2023 Succes!

// succres 7 / 9 / 2023

// 7 / 12 / 2023 SUCCES!


int main()
{
	Solution daps;
	std::vector<int> a = { 2,7,11,15 };
	for ( auto i : daps.twoSum(a, 9))
		std::cout << i << " ";
	return 0;
}