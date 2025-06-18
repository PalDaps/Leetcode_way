#include <iostream>

/*
18.06.2025
15:48

Задача: Дан связанный список и число n. Нужно удалить n-узел, считая от конца.

Идея:

Решение: Два указателя. Один двигаем с шагом один, второй двигаем с шагом n. Как только второй будет Nullptr. Значит первый стоит на узле,
котороый находится перед тем, который нужно удалить. Удаляем. Еще нужно учесть момент, что n == Size.

P.S. Решение придумал хорошее, но правильно реализовать не смог.
*/

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode* pSlow = head;
        ListNode* pFast = head;
        while (1)
        {
            pSlow = pSlow->next;
            for (size_t i = 0; i < n; i++)
            {
                if (pFast == nullptr)
                {
                    ListNode* pDeleteNode = pSlow->next;
                    pSlow->next = pDeleteNode->next;
                    return head;
                }
                pFast = pFast->next;
            }
        }
        return nullptr;
    }
};

