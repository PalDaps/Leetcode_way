#include <iostream>

/*

02.07.2025
17:52

Задача: Дана список и число k. Нужно сдвинуть список вправо на число k.

Идея: Зациклить цикл. И мы знаем где конец нового списка с помощью двух чисел: Size и k.

P.S. Мда, мусолил свою идею часа 2 и в итоге ничего не придумал.
P.S. Странно, почему-то git лагает или что

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

class Solution
{
public:
    ListNode* rotateRight(ListNode* head, int k)
    {
        if (!head) return nullptr;
        ListNode* pTail = head;
        ListNode* pNewHead = head;
        int Size = 1;
        while (pTail->next)
        {   
            pTail = pTail->next;
            Size++; 
        }
        pTail->next = head;
        if (k %= Size)
        {
            for (size_t i = 0; i < Size - k; i++)
            {
                pTail = pTail->next;
            }
        }
        pNewHead = pTail->next;
        pTail->next = nullptr;
        return pNewHead;
    }
};