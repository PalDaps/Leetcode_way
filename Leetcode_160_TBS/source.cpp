#include <iostream>

/*
18.06.2025
14:24

Задача: Дано 2 связанных списка. Нужно вернуть ноду, где они начинают пересекаться.

Идея: Проходить списки до тех пор, пока не закончатся. А если закончились менять указатель на начало другого списка.

Решение: Идем по спискам. Если указтель равняется nullptr значит мы в конце списка и теперь просто начинаем шагать с начала другого списка.
Так или иначе они пересекутся, так как пройдут одинаковое расстояние.

P.S.
26.07.2025
19:15
Не смог заново решить задачу, когда даже отрывочно помнил идею. Мозг не хотел рабоать(ленивый).

*/

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
    {
        ListNode* pIteratorA = headA;
        ListNode* pIteratorB = headB;
        while (pIteratorA != pIteratorB)
        {
            if (pIteratorA == nullptr) pIteratorA = headB;
            else pIteratorA = pIteratorA->next;

            if (pIteratorB == nullptr) pIteratorB = headA;
            else pIteratorB = pIteratorB->next;
        }
        return pIteratorA;
    }
};

/*

Notes of repeats

// 26.07.2025 - Failure
// 19:10      -
// P.S.       - Task +, Idea +, Solution -, Corner cases -

*/