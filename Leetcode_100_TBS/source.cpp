#include <iostream>

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

/*

10.08.2025
23:32

Задача: Дано два дерева p и q. Нужно вернуть true, если они равны и false если есть несоответсвия.

Идея: Мой код, но заменены некоторые части кода на более рациональные. 

Решение: Если оба nullptr, то false. Если оба есть и оба равны, то смотрим дальше. В любых других случаях false. Гениально.

P.S. 23:35 Vibe(Hard)LeetCoding :)

*/

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q)
    {
        if (!p && !q) return true;
        if (p && q && p->val == q->val)
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        return false;
    }
};