#include <vector>
#include <queue>

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

13.08.2025
10:04

Задача: Дано бинарное дерево. Нужно вернуть двумерный массив, где все ноды будут располагаться в соответсвии с их уровнями в бинарном
дереве.

Идея: Счетчик глубины, учет размера двумерного массива и рекурсивный перебор всего дерева.

Решение: Cчетчик глубины. Считаем с нуля, если глубина и текущий массив равны, то добавляем вектор для уровня. Добавляем элемент в 
уровень и просто переберием все дерево рекурсивно.

P.S. 10:07 Красиво.

*/


class Solution
{
public:
    void Dfs(std::vector<std::vector<int>>& Result, int Depth, TreeNode* root)
    {
        if (!root) return;

        if (Depth == Result.size())
        {
            std::vector<int> Level;
            Result.push_back(Level);
        }
        Result[Depth].push_back(root->val);
        Dfs(Result, Depth + 1, root->left);
        Dfs(Result, Depth + 1, root->right);
    }
    std::vector<std::vector<int>> levelOrder(TreeNode* root)
    {
        std::vector<std::vector<int>> Result;
        int Depth = 0;
        Dfs(Result, Depth, root);
        return Result;
    }
};

/*

Каноническое решение через очерердь

13.08.2025
10:29

Задача: Дано бинарное дерево. Нужно вернуть двумерный массив, где все ноды будут располагаться в соответсвии с их уровнями в бинарном
дереве.

Идея: Добавляем в очередь, идем по очереди, формируем вектор уровня.

Решение: Очередь. Добавляем в очередь элемент. Смотрим пока очередь не пуста. Идем по очередь и что в ней есть добавляем в вектор уровня.
С помощью этой ноды, смотрим есть ли у нее дети и их добавляем в очередь. Ну и удалить нужно потом эту ноду.

P.S. 10:33 Что-то мой мозг сегодня совсем ленивый.

*/

class Solution
{
public:
    std::vector<std::vector<int>> levelOrder(TreeNode* root)
    {
        std::vector<std::vector<int>> Result;
        if (!root) return Result;
        std::queue<TreeNode*> Q;
        Q.push(root);
        while (!Q.empty())
        {
            int CurrLvlSize = Q.size();
            std::vector<int> CurrLvl;
            for (int i = 0; i < CurrLvlSize; i++)
            {
                TreeNode* pNode = Q.front();
                Q.pop();
                if (pNode->left) Q.push(pNode->left);
                if (pNode->right) Q.push(pNode->right);
                CurrLvl.push_back(pNode->val);
            }
            Result.push_back(CurrLvl);
        }
        return Result;
    }
};

/*

Notes of repeats

// 16.08.2025 - Success
// 20:48      - Two methods success.
// P.S.       - Task +, Idea +, Solution +, Corner cases +

*/