#include <iostream>

/*
24.06.2025
13:01

Задача: Дан связанный список. Нужно понять ялвяется ли он палиндромом или нет.

Идея: Найти середину. Перевенуть последнюю часть списка. И сравнить две части списка пока не кончится часть, которую перевернули. 

P.S. Мне кажется она точно не легкая. Хотя, навреное, любое решение, даже самое не оптимальное сработает. 

*/

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head)
    {
        ListNode* pSlow = head;
        ListNode* pFast = head;
        while (pFast && pFast->next)
        {
            pSlow = pSlow->next;
            pFast = pFast->next->next;
        }

        ListNode* pPrev = nullptr;
        ListNode* pNext = nullptr;
        while (pSlow)
        {
            pNext = pSlow->next;
            pSlow->next = pPrev;
            pPrev = pSlow;
            pSlow = pNext;
        }

        while (pPrev && head)
        {
            if (pPrev->val != head->val) return false;
            pPrev = pPrev->next;
            head = head->next;
        }

        return true;
    }
};