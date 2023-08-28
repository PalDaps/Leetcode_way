#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
	bool uniqueOccurances(std::vector<int>& arr) {
        std::unordered_map<int, int> map;
        int c = 0;
        for (auto i : arr) {
            map[c++] = i;
    
        }
	}
};

int main() {
    std::vector<int> test1 = { 1,2,2,1,1,3 };
    Solution daps;
    daps.uniqueOccurances(test1);
	return 0;
}