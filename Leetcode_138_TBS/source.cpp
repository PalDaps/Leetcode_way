#include <iostream>
#include <unordered_map>

/*

01.07.2025
17:18

Задача: Дана список. Где есть еще random, который указывает на случайный элемент из списка. Нужно сделать новый список,
полностью скопирав старый.

Идея: Использовать хэш-таблицу. Идем по списку, добавляем в таблицу новые ноды по ключу старого списка. Тем самым мы можем
связать новый список за счет старого.

P.S. 
Это сложно в голове удержать. Именно как за счет старого списка определяются связи нового списка за счет поиска в хэш-таблице.

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
        std::unordered_map<Node*, Node*> NodeMap;
        Node* pIt = head;
        while (pIt)
        {
            NodeMap[pIt] = new Node(pIt->val);
            pIt = pIt->next;
        }
        pIt = head;

        while (pIt)
        {
            NodeMap[pIt]->next = NodeMap[pIt->next];
            NodeMap[pIt]->random = NodeMap[pIt->random];
            pIt = pIt->next;
        }
        pIt = head;
        return NodeMap[pIt];
    }
};