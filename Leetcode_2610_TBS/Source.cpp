#include <iostream>
#include <vector>

/*
–ешение:

” нас есть массив с числами такими, что 1 <= nums[i] <= nums.length
ѕоэтому создаем массив дл€ отслеживани€ частоты конкретного значени€ массива Nums размером Nums.size()+1
≈сли частота числа из входного массива >= количеству строк в двумерном массиве, то добавл€ем новую строчку
¬сегда добавл€ем в строку со значением частоты число из входного массива
» в конце увеличиваем частоту числа их входного массива, которое прогон€етс€ на данный момент 
*/ 
 


class Solution
{
public:
	std::vector<std::vector<int>> findMatrix(std::vector<int>& Nums)
	{
		std::vector<int> Frequence(Nums.size()+1);
		std::vector<std::vector<int>> Result;
		for (int i : Nums)
		{
			if (Frequence[i] >= Result.size())
			{
				Result.push_back({});
			}

			Result[Frequence[i]].push_back(i);
			Frequence[i]++;
		}
		return Result;
	}
};

// 13 : 42 PM / after a 15 min
// 03 / 01 / 2024 / SUCCESS

class Solution
{
public:
	std::vector<std::vector<int>> findMatrix(std::vector<int>& Nums)
	{
		std::vector<int> Freq(Nums.size() + 1);
		std::vector<std::vector<int>> Res;
		for (auto i : Nums)
		{
			if (Freq[i] >= Res.size())
			{
				Res.push_back({});
			}

			Res[Freq[i]].push_back(i);
			Freq[i]++;
		}
		return Res;
	}
};



int main()
{
	std::vector<int> Test1 = { 1,3,4,1,2,3,1 };
	std::vector<int> Test2 = { 100,5,3,3,3 };
	Solution daps;
	daps.findMatrix(Test2);
	return 0;
}