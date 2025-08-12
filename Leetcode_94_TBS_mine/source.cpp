#include <iostream>
#include <vector>

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

11.08.2025
01:24

������: ���� �������� ������. ����� ������� ��� ��� ����� � ����� - the inorder traversal of its nodes' values.

����: ������ �������� �� ������ � ����� ������� �� ����� ������ ��������� ��������� �������� ���� � ������.

P.S. 1:26 �� ������ ���� �������, ��� �����: the inorder traversal of its nodes' values. � �� ������, ��� ��� ����� �������� ���� ����.

*/

class Solution {
public:
    void Solve(std::vector<int>& Result, TreeNode* root)
    {
        if (!root) return;
        Solve(Result, root->left);
        Result.push_back(root->val);
        Solve(Result, root->right);
    }
    std::vector<int> inorderTraversal(TreeNode* root)
    {
        std::vector<int> Result;
        Solve(Result, root);
        return Result;
    }
};

/*

Notes of repeats

// 12.08.2025 - Success
// 21:22      - Dpeth of recusion is not my yet.
// P.S.       - Task +, Idea +, Solution +, Corner cases +

*/