#include <iostream>

/*

28.06.2025
14:02

Задача: Дан связанный список с указателями на Next, Prev и Child. Child указатель на начало друго связанного списка. В итоге
получается многоуровненвая структура связанных списоков. Нужно сжать структура данных таким образом, чтобы  

Идея: 
1. Пройтись по списку, ищя child. 
2. Вставить дочерний список после текущей ноды. 
3. 

P.S. 
19:37
21.07.2025
Я не понимаю. И я в тильте!

*/

class Node 
{
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};

Node* flatten(Node* head, Node* rest = nullptr) 
{
    if (!head) return rest;
    Node* pTemp = flatten(head->next, rest);
    head->next = flatten(head->child, pTemp);
    if (head->next) head->next->prev = head;
    head->child = nullptr;
    return head;
}
