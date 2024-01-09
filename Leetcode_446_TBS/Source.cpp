#include <iostream>
#include <vector>
#include <unordered_map>

/*

*/

class Solution
{
public:
	int numberOfArithmeticsSlices(std::vector<int>& Nums)
	{
		int Size = Nums.size();
		int Result = 0;
		std::vector<std::unordered_map<int, int>> Vec(Size);
		for (int i = 1; i < Size; ++i)
		{
			for (int j = 0; i < i; ++j)
			{
				long long int d = static_cast<long long int>(Nums[i]) - Nums[j];
				if (d > INT_MAX || d < INT_MIN)
					continue;
				int _d = static_cast<int>(d);
				Vec[i][-d]++;

				if (Vec[j].count(_d))
				{
					Vec[i][_d] += Vec[j][_d];
					Result += Vec[j][_d];
				}
			}
		}
		return Result;
	}
};

int main()
{
	return 0;
}