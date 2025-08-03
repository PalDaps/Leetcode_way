#include <iostream>

/*

05.07.2025
23:11

������: ���� BST �������� ������. ����� ������� ����, � ������� �������� ����� ����� �������� ��������� val.

����: ������ � ����� ����� ��������.

P.S. ����� ������ ������� �������, �� ��� �� �� ����� ������� ��� ��� ��������. ������ � ��������. �� ��������
������� ��������.

*/

struct TreeNode 
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    TreeNode* searchBST(TreeNode* root, int val)
    {
        if (!root) return nullptr;
        if (root->val == val) return root;
        if (val > root->val) return searchBST(root->right, val);
        else return searchBST(root->left, val);
        return nullptr;
    }
};

/*

Notes of repeats

// 03.08.2025 - Success
// 17:03      - I still feel like I don't fully understand the depth of recursion
// P.S.       - Task +, Idea +, Solution +, Corner cases +

*/