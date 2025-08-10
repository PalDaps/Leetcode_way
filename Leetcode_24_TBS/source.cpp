#include <iostream>

/*

04.07.2025
23:44

Задача: Есть связанный список. Нужно свпануть 2 смежные ноды(Смежные ноды не перескаются). 1 -> 2 > 3

Идея: Шагаем на три ноды сразу. Тем самым частный случай рекурсии откинет нас на три последние ноды. Вернуть нужно
примыкащающую свапнутную ноду к трем предпоследним нодам.

Решение: Крайний случай, когда список пуст - возвращаем nullptr. И крепим nullptr к предпоследний ноде, после
так как последнюю ноду сохранили. То свапаем ->next последний ноды на предпоследнюю. И возвращаем последнюю ноду.
И дальше все в рекурсии. Тяжко.

P.S. Совсем не понимаю как это работает, хочу побегать отлдачиком.
P.S. Вообще не понимаю.
P.S. Возможно этот алгоритм придумывается на двух нодах.
P.S.
16:30
03.08.2025 
Все еще не понимаю. Но уже чуть-чуть лучше. 

*/

struct ListNode
{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution 
{
public:
    ListNode* swapPairs(ListNode* head)
    {
        if (!head || !head->next)
        {
            return head;
        }
        ListNode* Temp = head->next;
        head->next = swapPairs(head->next->next);
        Temp->next = head;
        return Temp;
    }
};

int main()
{
    /*
    
    Затестим пример: 1 -> 2 -> 3 -> 4 -> nullptr
    
    */
    ListNode* pOne = new ListNode(1);
    ListNode* pTwo = new ListNode(2);
    ListNode* pThree = new ListNode(3);
    ListNode* pFour = new ListNode(4, nullptr);

    pOne->next = pTwo;
    pTwo->next = pThree;
    pThree->next = pFour;

    Solution Recursion;
    Recursion.swapPairs(pOne);

    delete pOne;
    delete pTwo;
    delete pThree;
    delete pFour;
    return 0;
}

/*

// Notes of repeats

// 03.08.2025  : Failure
// 16:43       : head->next->next. Not understand deep recursion
// P.S.		   : Task +, Idea -, Solution -, Corner cases +

// 09.08.2025 - Success
// 20:22      - Not understand depth of recursion
// P.S.       - Task +, Idea +, Solution +, Corner cases +

*/


