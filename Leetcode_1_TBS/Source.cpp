#include <iostream>
#include <vector>
#include <unordered_map>

/*
25.04.2025
21:20
������: 
��� ��������������� ������ � ������� � ��������. ����� � ������� ����� ��� ����� �����, ������� � ����� ���� ��������.
� ������� �� ������� � �������, � �� ��������. ����� ������ ������������ ��������. ������� � ������ ������������.

�������:
����� � ������ �������� hast table, ������ ��� � ����� ��� ������ ��� 10. �, �������, �� ���� �������� ������������ ��� �������.
����� �� ������� � ��������� �������� � hast table. ��� value ��� �����, a key �������� ������. ����� �������� �������� ����� �����, ��
�� ������� ��� �� � hast table �������� ������, ������� ��������� target - ����� �����. ���� ����, �� ���������� ������ target � ������
������ �����.

���-�� ��� ������������, ��� key ������ ���� ���������, � value - ��������. ������ ��� ���������� ����� � hash table ������������ �� key.
�������, ����� ��������� � ����, ������ ��� ����� �� �������� unordered_map :(.

��� ������� � ������� � �������� ������ ��������� ��� � ����� � ��������, ��� ��� ��� �������. ��������� ������� ����� ����.
�� � �� ������ �������, ��� ��� ������ ������ ����������, ������ ��� �� ����������� �������� ������� ������ �� �����.
���-���� ��������� ������� � ������ ������ ����� � ��� ��� ������. ��� ������� � ���������. 

*/

class Solution
{
public:
	std::vector<int> twoSum(std::vector<int>& Nums, int Target)
	{
		std::unordered_map<int, int> Map;
		for (int i = 0; i < Nums.size(); i++)
		{
			int Delta = Target - Nums[i];
			if (Map.count(Delta))
			{
				return { i, Map[Delta]};
			}
			else
			{
				Map[Nums[i]] = i;
			}
		}
		return { 0 };
	}
};

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
// to be repeated later after 10 min 7 / 4 / 2023 SUCCESS!;

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


// after 30 min remember it. Success!
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

// after a day 7 / 5 / 2023 SUCCESS!
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

// after a 2 day 7 / 7 / 2023 Success!

// success 7 / 9 / 2023

// 7 / 12 / 2023 SUCCESS!

// 4 : 17 PM / 14
// 7 / 15 / 2023 / SUCCESS!

// 4 : 27 PM
// 7 / 19 / 2023 / SUCCESS!

// 9 : 26 AM / 1
// 7 / 26 / 2023 / SUCCESS
// In the train

// 15 : 05 PM
// 01 / 09 / 2023 / SUCCESS

//
// 21 : 56 PM
// 25 / 04 / 2025 // SUCCESS
/*
class Solution {
public:
	std::vector<int> twoSum(std::vector<int>& nums, int target) {
		std::unordered_map<int, int> map;
		for (int i = 0; i < nums.size(); i++) {
			int delta = target - nums[i];
			if (map.count(delta)) {
				return { map[delta], i };
			}
			map[nums[i]] = i;dashk@DAPS
		}
		return {};
	}
};
*/
int main()
{
	Solution daps;
	std::vector<int> a = { 2,7,11,15 };
	for ( auto i : daps.twoSum(a, 9))
		std::cout << i << " ";
	return 0;
}