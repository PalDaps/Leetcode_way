#include <iostream>

/*
18.06.2025
16:42

Задача: Дан связанный список, его нужно перевернуть.

Идея: Двигаем первый элемент до конца, а следующие переставляем вместо head.

Решение: 

*/

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};
