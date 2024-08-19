#include <iostream>
#include <vector>
#include <fstream>

//int MaxYoungHook(const std::vector<int>& Sizes, const int& k)
//{
//	int Result = 0;
//	int TempHook = k;
//	int Counter = 0;
//	int LastLength = 0;
//	int NextLength = 0;
//	for (int i = 0; i < Sizes.size() - 1; ++i)
//	{
//		for (int j = i; j < Sizes.size() - 1; ++j)
//		{
//			int Delta = Sizes[j] - Sizes[j + 1];
//			if (Delta == 0)
//			{
//				TempHook -= Delta + 1;
//				if (TempHook <= 0)
//				{
//					Result++;
//					break;
//				}
//				else
//				{
//
//				}
//			}
//			else if (Delta > 0)
//			{
//				TempHook -= Delta + 1;
//				if (TempHook <= 0)
//				{
//					Result++;
//					break;
//				}
//				else
//				{
//					LastLength = Sizes[j] - TempHook;
//				}
//			}
//			NextLength = Sizes[j + 1] - Delta - 1;
//		}
//		TempHook = k;
//	}
//	return Result;
//}

//int MaxYoungHook(const std::vector<int>& Sizes, const int& k)
//{
//	std::vector<int> Temp = Sizes;
//	int Hook = k;
//	int Result = 0;
//	int PrevLength = Temp[0];
//	for (int i = 0; i < Sizes.size() - 1; ++i)
//	{
//		for (int j = i; j < Sizes.size() - 1; ++j)
//		{
//			int Delta = -Temp[j] + Temp[j + 1];
//			while (Delta != 1)
//			{
//				Temp[j]--;
//				Hook--;
//				Delta = -Temp[j] + Temp[j + 1];
//				if (Hook == 0) break;
//			}
//			PrevLength = Temp[j];
//		}
//		
//
//	}
//	return Result;
//}

int MaxYoungHook(const std::vector<int>& Sizes, const int& k)
{
	int Result = 0;
	int TempHook = k;
	int Counter = 0;
	int LastLength = 0;
	int NextLength = 0;
	std::vector<int> Temp = Sizes;
	for (int i = 0; i < Sizes.size() - 1; ++i)
	{
		for (int j = i; j < Sizes.size() - 1; ++j)
		{
			int DeltaString = Sizes[j] - Sizes[j + 1];
			while (Temp[j] > Temp[j + 1])
			{
				Temp[j]--;
				TempHook--;
				if (Temp[j] + k == Sizes[j] && TempHook == 0)
				{
					break;
				}
			}
			while (Temp[j] == Temp[j + 1] && TempHook >= 2)
			{
				Temp[j]--;
				Temp[j + 1]--;
				TempHook -= 2;
				if (TempHook == 0)
				{
					break;
				}
				break;
			}
			if (TempHook == 0)
			{
				Result++;
				break;
			}
		}
		TempHook = k;
		Temp = Sizes;
	}
	return Result;
}

int main()
{
	std::ifstream InputFile("input.txt");
	std::ofstream OutputFile("output.txt");
	if (!InputFile || !OutputFile)
	{
		std::cout << "ERROR" << std::endl;
	}
	size_t Size = 0;
	size_t k = 0;
	InputFile >> Size >> k;
	std::vector<int> Sizes(Size);
	for (size_t i = 0; i < Size; ++i)
	{
		InputFile >> Sizes[i];
	}
	OutputFile << MaxYoungHook(Sizes, k);
	return 0;
}
