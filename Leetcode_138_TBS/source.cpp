#include <iostream>
#include <unordered_map>

/*

01.07.2025
17:18

������: ���� ������. ��� ���� ��� random, ������� ��������� �� ��������� ������� �� ������. ����� ������� ����� ������,
��������� �������� ������.

����: ������������ ���-�������. ���� �� ������, ��������� � ������� ����� ���� �� ����� ������� ������. ��� ����� �� �����
������� ����� ������ �� ���� �������.

P.S. 
��� ������ � ������ ��������. ������ ��� �� ���� ������� ������ ������������ ����� ������ ������ �� ���� ������ � ���-�������.

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