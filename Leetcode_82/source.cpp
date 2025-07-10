#include <iostream>

/*

09.07.2025
22:04

«адача : ƒан св€занный список. Ќоды упор€дочены. Ќужно удалить все повтор€ющиес€ элементы.

»де€: »дти с момента когда есть две повтор€ющиес€ ноды и либо их удал€ть, сдвига€ список, либо идти дальше до момента встречи
ноды с другим значением.

–ешение: ≈сли две соседение ноды равны, то идем до момента, пока не встретим ноду с другим значением. »наче запоминаем
предыдущую ноду и идем по списку. 

P.S. 23:00 «а 40 минут с такой идеей не решил. Ќе знаю почему не могу быстро придумывать алгоритм и быстро прогон€ть тесты в
голове.

P.S.
10.07.2025
13:59
ќчень долго писал решение к этой задаче, не могу в голове обойти все корнер кейсы, наверное это из-за того, что очень мало
нарешено задач. ѕрибегал к тестам на литкоде, понадобилось штук 20 тестов, что синтезировать свое решение. “акже изначально
была очень плохо сформулирована иде€ : "»дти по списку и удал€ть". Ёто очень абстрактно. 

*/

struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution 
{
public:
    ListNode* deleteDuplicates(ListNode* head)
    {
        ListNode* pIter = head;
        ListNode* pDummy = new ListNode(-1, head);
        ListNode* pPrev = pDummy;
        while (pIter && pIter->next)
        {
            ListNode* pNext = pIter->next;
            if (pIter->val == pNext->val)
            {
                while (pIter && pIter->next)
                {
                    pNext = pIter->next;
                    if (pIter->val != pNext->val)
                    {
                        pPrev->next = pNext;
                        pIter = pNext;
                        break;
                    }
                    else if (pNext->next == nullptr)
                    {
                        pPrev->next = nullptr;
                    }
                    pIter = pNext;
                }
            }
            else
            {
                pPrev = pIter;
            }
            pIter = pNext;

        }
        return pDummy->next;
    }
};