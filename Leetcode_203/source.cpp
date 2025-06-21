#include <iostream>

/*
20.06.2025
14:49

Задача: Дан связанный список, нужно удалить все элементы со одним входным значением.

Идея: Бежать по списку и удалять по пути.

Решение: 

P.S. Ну как-бы я решил без подглядок и подсмотров куда-либо. Это было сложно решал где-то 46 минут easy задачу. Но решил. 
Сложное было то, что мой мозг медленно работает и не может удержать 5 значений переменных, чтобы писать код на основе этих состояний.
*/

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val)
    {
        ListNode* pDummy = new ListNode(0);
        pDummy->next = head;
        ListNode* pIterator = pDummy;
        ListNode* pNextNode = pDummy;
        ListNode* pPrevNode = pDummy;
        while (pIterator)
        {
            pNextNode = pIterator->next;
            if (pIterator->val == val)
            {
                pPrevNode->next = pNextNode;
            }
            else
            {
                pPrevNode = pIterator;
            }
            pIterator = pNextNode;
        }
        return pDummy->next;
    }
};