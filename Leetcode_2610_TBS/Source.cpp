#include <iostream>
#include <vector>
#include <array>

/*
«адача:
≈сть массив(„исла в нем могут повтор€тьс€), необходимо за минимальное количество операций 
сформировать двумерный массив так, чтобы в кажой строке были различные числа.

–ешение:
                                                       
” нас есть массив с числами такими, что 1 <= nums[i] !!(<=)!! nums.length
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

// 14 : 57 PM / after an 1 hour 
// 03 / 01 / 2024 / SUCCESS


// 17 : 45 PM / after an 1 day 
// 04 / 01 / 2024 / SUCCESS

// 11 : 36 AM / after a five days
// 09 / 01 / 2023 / Failure
// «абываю суть решени€ и потом долго не могу вспомнить. ѕроблема была в этой строчке:
// Result[Freq[i]].push_back(i) - не мог пон€ть как в строчку добавить число из Nums  и
// сомневалс€, что это вообще было правильно. я всегда пытаюсь воспроизвести по пам€ть код,
// а не смысл решени€. ’от€ решение понимаю, но некоторые переходные моменты забываю.
// 1
class Solution
{
public:
	std::vector<std::vector<int>> findMatrix(std::vector<int> Nums)
	{
		std::vector<int> Freq(Nums.size() + 1);
		std::vector<std::vector<int>> Result;
		for (auto i : Nums)
		{
			if (Freq[i] >= Result.size()) Result.push_back({});
			Result[Freq[i]].push_back(i);
			Freq[i]++;
		}
		return Result;
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