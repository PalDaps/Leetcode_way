#include <iostream>

struct TreeNode 
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

/*

10.08.2025
23:26

������: ���� ��� ������ p � q. ����� ������� true, ���� ��� ����� � false ���� ���� �������������. 

����: ������ �������� ��� ������ ������������ � ������ ��� ������� ������.

*/
 

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q)
    {
        if (!p && !q) return true;
        else if (!p) return false;
        else if (!q) return false;

        if (p->val == q->val)
        {
            bool Left = isSameTree(p->left, q->left);
            bool right = isSameTree(p->right, q->right);
            return Left && right;
        }
        else return false;
    }
};