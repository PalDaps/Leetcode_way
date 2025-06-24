#include <iostream>

/*
18.06.2025
16:42

Задача: Дан связанный список, его нужно перевернуть.

Идея: Переворачиваем указатели на следующие ноды, путем сохранения состояний с помощью pPrev, pNext. Итерируемся с помощью head.

Решение: 

P.S. 12:32 24.06.2025
Далеко понял не с первого раза задачу. Сложная штука.

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
    ListNode* reverseList(ListNode* head)
    {
        ListNode* pPrev = nullptr;
        ListNode* pNext = nullptr;
        while (head)
        {
            pNext = head->next;
            head->next = pPrev;
            pPrev = head;
            head = pNext;
        }
        return pPrev;
    }
};