#include <iostream>

/*
18.06.2025
14:01

Задача: Дано 2 связанных списка. Нужно вернуть ноду, где они начинают пересекаться.

Идея:

Решение: Как будто легкая задача. Берем первую голову смотрим, что она не равна второй и идем дальше. Если равна то возвращаем ноду.

P.S. Сложно никогда не решал подобные задачи. Тогда просто постараюсь понять чужое крутое решение и все.
P.S.
14:34 
Ну брутфорсом задачу я решил. Еще можно решить через хэш таблицу, так как в ней поиск есть за o(1).


*/

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class SolutionBruteForce {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
    {
        ListNode* pIteratorA = headA;
        ListNode* pIteratorB = headB;
        while (pIteratorA || pIteratorB)
        {
            ListNode* pIteratorA = headA;
            ListNode* pIteratorB = headB;
            while (pIteratorA != nullptr)
            {
                pIteratorB = headB;
                while (pIteratorB != nullptr)
                {
                    if (pIteratorA == pIteratorB) return pIteratorA;
                    pIteratorB = pIteratorB->next;
                }
                pIteratorA = pIteratorA->next;
            }
            return nullptr;
        }
        return nullptr;
    }
};
