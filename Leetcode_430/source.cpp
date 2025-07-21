#include <iostream>

/*

28.06.2025
14:02

������: ��� ��������� ������ � ����������� �� Next, Prev � Child. Child ��������� �� ������ ����� ���������� ������. � �����
���������� ��������������� ��������� ��������� ��������. ����� ����� ��������� ������ ����� �������, �����  

����: 
1. �������� �� ������, ��� child. 
2. �������� �������� ������ ����� ������� ����. 
3. 

P.S. 
19:37
21.07.2025
� �� �������. � � � ������!

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
