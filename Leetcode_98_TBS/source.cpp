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

Задача: Проверить, является ли дерево BST или нет. Если BST вернут истину, иначе ложь.

Идея: Сохраняем диапазон значения для root. И проверяем так далее.

Решение: Первый root может лежать в диапазон от MIN до MAX. Левый root-left->val может лежать в диапазоне от 
MIN до root-val. Правый от root->right->val до INT_MAX.

P.S. 14:29 До конца не понимаю и бесит, что я бросил свою идею. Ладно мою решение оч сложно доработать - 
проблема в идее.

P.S. 14:40 Красиво.

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