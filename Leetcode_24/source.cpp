#include <iostream>
#include <vector>

/*

04.07.2025
14:02

Задача: Есть связанный список. Нужно свпануть 2 смежные ноды(Смежные ноды не перескаются). 1 -> 2 > 3

Идея: Менять местами ноды. Но нужно запоминать предыдущую ноду, 

P.S. Решил за час где-то с 5-ю тестами литкода, как-то не хотелось все в голове прокручивать. Забывал, что 
указатели некоторые обновил. Вообщем, вообще невнимательно решал задачу. Не отдал ей всю свою концентрацию, 
почему-то. Видимо весь запас концентрации закончился.

*/


struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* swapPairs(ListNode* head)
    {
        if (!head || !head->next) return head;

        ListNode* pDummy = new ListNode(0, head);
        ListNode* pIt = pDummy->next;
        ListNode* pPrev = pDummy;

        while (pIt && pIt->next)
        {
            ListNode* pNext = pIt->next;
            ListNode* pTemp = pNext->next;

            pNext->next = pIt;
            pIt->next = pTemp;
            pPrev->next = pNext;

            pPrev = pIt;
            pIt = pTemp;
        }

        return pDummy->next;
    }
};