#include <iostream>
#include <vector>

class Solution
{
public:
	int numberOfBeams(std::vector<std::string>& Bank)
	{
		int Beams = 0;
		for (int i = 0, PrevSum = 0, CurrSum = 0; i < Bank.size(); i++)
		{
			for (int j = 0; j < Bank[i].size(); j++)
			{
				if (Bank[i][j] == '1') CurrSum++;
			}
			if (CurrSum > 0)
			{
				Beams += PrevSum * CurrSum;
				PrevSum = CurrSum;
			}
			CurrSum = 0;
		}
		return Beams;
	}
};

int main()
{
	std::vector<std::string> Test1 = {"011001","000000","010100","001000"};
	Solution daps;
	daps.numberOfBeams(Test1);
	return 0;
}