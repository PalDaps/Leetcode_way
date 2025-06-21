#include <iostream>

/*
21.06.2025
16:19

«адача: ƒан св€занный список. Ќужно переставить все ноды с нечетным номером в конец списка.

»де€: »дти по св€занному списку и смотреть, если нечетна€, то удал€ть и запоминать ее, формиру€ новый список с нечетными нодами. ¬ конце
просто св€зать два списка.

P.S. –ешил задачу просто проработав один конкретный тестовый пример:
1 2 3 4 5
Step 1:
pIt == 1; Index == 0;
pNext == 2;
pPrev == 1;

Step 2:
pIt == 2; Index == 1;
pNext == 3;
pOddHead == 2;
pItOddHead == 2;

Step 3:
pIt == 3;
pNext == 4;
pPrev == 3;

Step 4:
pIt == 4;
pNext == 5;
pPrev->next = pNext = 5;
pItOddHead->next = 4;

Step 5:
pIt == 5;
pNext == nullptr;
pLastNode == 5;

*/

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode* oddEvenList(ListNode* head)
    {
        ListNode* pIt = head;
        ListNode* pPrev = head;
        ListNode* pNext = head;

        ListNode* pOddHead = nullptr;
        ListNode* pItOddHead = pOddHead;
        size_t i = 0;
        while (pIt)
        {
            pNext = pIt->next;
            if (i % 2)
            {
                pPrev->next = pNext;
                if (i == 1)
                {
                    pOddHead = pIt;
                    pItOddHead = pOddHead;
                }
                else
                {
                    pItOddHead->next = pIt;
                    pItOddHead = pItOddHead->next;
                }
            }
            else
            {
                pPrev = pIt;
            }
            pIt = pNext;
            i++;
        }
        if (pItOddHead)
        {
            pItOddHead->next = nullptr;
            pPrev->next = pOddHead;
        }
        return head;
    }
};