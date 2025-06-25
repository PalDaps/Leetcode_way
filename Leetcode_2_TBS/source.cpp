#include <iostream>

 /*

 25.06.2025
 10:31

 Задача: Есть два связных списка с числами. Нужно сложить значения нод, по правилам суммы чисел. И вернуть результирующий список с ответным
 числом в видел чисел в нодах.

 Идея: В тупую. Идти по спискам и складывать значения. Продусмотреть частные случаи, например, когда заканчивается первый или второй список.

 */

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

class Solution {
public:

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode* pResultList = new ListNode();
        ListNode* pItResult = pResultList;
        int AddSum = 0;

        while (l1 || l2 || AddSum)
        {
            int Val1 = l1 ? l1->val : 0;
            int Val2 = l2 ? l2->val : 0;

            int Sum = Val1 + Val2 + AddSum;
            int Digit = Sum % 10;
            AddSum = Sum / 10;

            ListNode* pNewNode = new ListNode(Digit);
            pItResult->next = pNewNode;
            pItResult = pItResult->next;

            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }

        return pResultList->next;
    }
};