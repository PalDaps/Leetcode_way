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

������: ���� ��� ������ p � q. ����� ������� true, ���� ��� ����� � false ���� ���� �������������.

����: ��� ���, �� �������� ��������� ����� ���� �� ����� ������������. 

�������: ���� ��� nullptr, �� false. ���� ��� ���� � ��� �����, �� ������� ������. � ����� ������ ������� false. ���������.

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