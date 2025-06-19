#include <iostream>

/*
18.06.2025
16:08

Задача: Дан связанный список и число n. Нужно удалить n-узел, считая от конца.

Идея: Два указателя. Если быстрый указатель сдвинуть с шагом n, а потом двигать первый и второй с шагом один, то медленный окажется на узле
за котором стоит обьект, который нужно удалить.

Решение: Два указателя. Один двигаем с шагом один, второй двигаем с шагом n. Как только второй будет Nullptr. Значит первый стоит на узле,
котороый находится перед тем, который нужно удалить. Удаляем. Еще нужно учесть момент, что n == Size. Также необходимо добавить Dummy узел,
чтобы учесть n == Size. И второй указатель можно двигать не с шагом n, а двинуть один раз с шагом n, а потом просто как обычно.

P.S. Вроде понял решение.
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
        ListNode* pDummy = new ListNode(0);
        pDummy->next = head;
        ListNode* pSlow = pDummy;
        ListNode* pFast = pDummy;

        for (size_t i = 0; i <= n; i++)
        {
            pFast = pFast->next;
        }
        while (pFast != nullptr)
        {
            pFast = pFast->next;
            pSlow = pSlow->next;
        }
        ListNode* pDeleteNode = pSlow->next;
        pSlow->next = pDeleteNode->next;
        delete pDeleteNode;

    }
};
