#include <iostream>

/*

01.07.2025
17:18

Задача: Дана список. Где есть еще random, который указывает на случайный элемент из списка. Нужно сделать новый список, 
полностью скопирав старый.

Идея: Идеи не придумал, попытался сделать просто бежав по списку. Но вот, что понял, что за один проход точно без доп.памяти 
не сделать.

*/

class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head)
    {
        Node* pNewHead = new Node(head->val);

        Node* pIt = head;
        while (pIt)
        {

        }
        Node* pNewIt = pNewHead;

        while (pIt)
        {
            Node* pNext = pIt->next;
            Node* pRandom = pIt->random;
            int Val = pIt->val;

            if (pNext)
            {
                int NextVal = pNext->val;
                Node* pNewNext = new Node(NextVal);
                pNewIt->next = pNewNext;
            }
            else
            {
                pNewIt->next = nullptr;
            }

            if (pRandom)
            {
                int RandomVal = pRandom->val;
                Node* pNewRandom = new Node(RandomVal);
                pNewIt->random = pNewRandom;
            }
            else
            {
                pNewIt->random = nullptr;
            }

            pNewIt = pNewIt->next;
            pIt = pIt->next;
        }

        return pNewHead;
    }
};