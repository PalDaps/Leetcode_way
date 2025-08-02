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

02.08.2025
14:29

������: ���������, �������� �� ������ BST ��� ���. ���� BST ������ ������, ����� ����.

����: ��������� �������� �������� ��� root. � ��������� ��� �����.

�������: ������ root ����� ������ � �������� �� MIN �� MAX. ����� root-left->val ����� ������ � ��������� �� 
MIN �� root-val. ������ �� root->right->val �� INT_MAX.

P.S. 14:29 �� ����� �� ������� � �����, ��� � ������ ���� ����. ����� ��� ������� �� ������ ���������� - 
�������� � ����.

P.S. 14:40 �������.

*/

class Solution
{
public:
    bool IsValid(TreeNode* root, long int Min, long int Max)
    {
        if (root == nullptr) return true;

        if (root->val >= Max || root->val <= Min) return false;
        bool LeftSubTree = IsValid(root->left, Min, root->val);
        bool RightSubTree = IsValid(root->right, root->val, Max);
        return LeftSubTree && RightSubTree;
    }

    bool isValidBST(TreeNode* root)
    {
        return IsValid(root, LLONG_MIN, LLONG_MAX);
    }
};