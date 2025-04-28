#include <iostream>
#include <vector>
/*
28.04.2025
19:16
Задача: Есть массив с высотами. Нужно определить максимальную площадь между двумя высотами.
Идея: 
Два указателя.Один Right, другой Left.
Начинаем Right на индексе 0, Left нас на индексе height.size() - 1.
И считаем сразу площадь смотрим что меньше из Right и Letft, и умножаем на разницу индексов.
То, что меньше двигаем.Если right, то right++, иначе --left.
Двигаем right считаем заново. Это сработало.
*/
class Solution 
{
public:
	int maxArea(std::vector<int>& height)
	{
		int Right = 0, Left = height.size() - 1, Area = 0;
		while (Right != Left)
		{
			Area = std::max(Area, (Left - Right) * (std::min(height[Right], height[Left])));
			if (height[Right] > height[Left]) Left--;
			else Right++;
		}
		return Area;
	}
};

// 4 : 09 PM
// 7 / 19 / 2023
/*
class Solution {
public:
	int maxArea(std::vector<int>& height) {
		int sq = 0;
		int l = 0;
		int r = height.size() - 1;
		while (l < r) {
			sq = std::max(sq, (r - l) * std::min(height[l], height[r]));
			if (height[l] < height[r]) {
				l++;
			}
			else
				r--;
		}
		return sq;
	}
};
*/
// 5 : 50 PM
// 7 / 22 / 2023 / SUCCESS

// 4 : 21 PM
// 7 / 23 / 2023 / SUCCESS

// 12 : 05 PM
// 7 / 24 / 2023 / SUCCESS

// 9 : 36 AM / 3
// 7 / 26 / 2023 / SUCCESS
// In the train

// 11 : 02 PM / after a two week
// 8 / 5 / 2023 / SUCCESS
// Perfect!

// 10 : 58 PM / after a two week
// 8 / 5 / 2023 / SUCCESS
// I remember this task and the essence of its solution perfectly

// 23 : 12 PM
// 27 / 08 / 2023 / SUCCESS

// 19 : 30 PM
// 28 / 04 / 2025 / SUCCESS

/*
class Solution {
public:
	int maxArea(std::vector<int>& height) {
		int l = 0;
		int r = height.size() - 1;
		int sq = 0;
		while (l < r) {
			sq = std::max(sq, (r - l) * std::min(height[l], height[r]));
			if (height[l] < height[r]) l++;
			else r--;
		}
		return sq;

	}
};
*/
int main() {
	return 0;
}