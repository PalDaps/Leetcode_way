#include <iostream>

struct ListNode
{
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr)
	{
	}
	ListNode(int x) : val(x), next(nullptr)
	{
	}
	ListNode(int x, ListNode* next) : val(x), next(next)
	{

	}
};

/*

18:04
05.05.2025

Идея: Частные случаи. Что меньше, то и добавляем в результирующий линкед лист.

Решение: Выбираем, что меньше и добавляем в результирующий линкед лист. Если закончились оба, то возвращаем результирующий сортед линкед лист.
Если закончился первый, то отсавшаяся часть второго листа добавляется в результирущий. Аналогично, если закончился второй.

*/

class Solution
{
public: 
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
	{
		ListNode* result = new ListNode(0);
		ListNode* current_result = result;
		while (true)
		{
			if (list1 == nullptr && list2 == nullptr)
			{
				return result->next;
			}
			else if (list1 == nullptr)
			{
				current_result->next = list2;
				return result->next;
			}
			else if (list2 == nullptr)
			{
				current_result->next = list1;
				return result->next;
			}
			else
			{
				if (list1->val < list2->val)
				{
					current_result->next = list1;
					current_result = current_result->next;
					list1 = list1->next;
				}
				else
				{
					current_result->next = list2;
					current_result = current_result->next;
					list2 = list2->next;
				}
			}
		}
	}
};

/*

21:16
19.07.2025

Задача: дано два сортитд линкед листа, нужно сделать 1 сортид линкед лист.

Идея: 

Решение: 

Рекурсивный подход:

P.S. Не понимаю как обьединяются два Linked в один с помощью рекурсии. Нужно побегать отладчиком.

*/

class SolutionRecursion 
{
public:
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
	{
		if (!list1) return list2;
		if (!list2) return list1;
		if (list1->val < list2->val)
		{
			list1->next = mergeTwoLists(list1->next, list2);
			return list1;
		}
		else
		{
			list2->next = mergeTwoLists(list1, list2->next);
			return list2;
		}
	}
};

// SUCCESS 7 / 10 / 2023

// 7 / 12 / 2023 / SUCCESS!

// 4 : 45 PM / 19
// 7 / 15 / 2023 / SUCCESS

// 11 : 31 AM / 13
// 7 / 26 / 2023 / 50% - 50% SUCCESS
// i returned curr->next instead of res.next

// 13 : 23 PM
// 03 / 09 / 2023 / The failure

// 19 : 37 PM
// 04 / 09 / 2023 / SUCCESS

int main()
{
	ListNode* pNode_1_3 = new ListNode(4, nullptr);
	ListNode* pNode_1_2 = new ListNode(2, pNode_1_3);
	ListNode* pNode_1_1 = new ListNode(1, pNode_1_2);

	ListNode* pNode_2_3 = new ListNode(4, nullptr);
	ListNode* pNode_2_2 = new ListNode(3, pNode_2_3);
	ListNode* pNode_2_1 = new ListNode(1, pNode_2_2);

	SolutionRecursion Daps;
	Daps.mergeTwoLists(pNode_1_1, pNode_2_1);

	delete pNode_1_3;
	delete pNode_1_2;
	delete pNode_1_1;

	delete pNode_2_3;
	delete pNode_2_2;
	delete pNode_2_1;

	return 0;
}

/*

Notes of repeats

// 19.07.2025 - Success
// 21:24      - Repeat iterative method. Nice!
// P.S.       - Task +, Idea +, Solution +, Corner cases +

*/