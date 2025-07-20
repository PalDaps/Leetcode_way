#include <iostream>
#include <vector>

/*

16:05
16.07.2025

Задача: Дано число n. Нужно вернуть все варианты BST деревьев, у которых n-нод со значениями от 1 до n. Возвращать
ответ можно в любом порядке.

Идея: Каждая возможная вершина i от start == i до end == n может быть корнем дерева. Все, что меньше i,
должно быть в левом поддереве, все, что больше - в правом. Для каждой такой пары левых и правых
поддеревьев нужно сгенерировать все комбинации и прикрепить их к корню i.

Решение: для меня решение этой задачи, это построчный разбор кода с упопром на глубину рекурсии.

P.S.
14:52
20.07.2025
Прошло 4 дня я все еще не могу понять решение задачи. Ужас, а не рекурсия.

P.S. 16:02 Очень сложная задача. Я не понимаю как понять глубину рекурсии.

P.S. 16:09 Как запоминать идею и решений этой задачи? Очень хороший вопрос, так как я не до конца понимаю
глубину рекурсию, но есть вариант:
Допустим, мне нужны все деревья      - std::vector<TreeNode*> pResult;
Когда нечего строить?                - if(Start > End)
Какие могу быть корни?               - i перебираем с помощью for(int i = Start; i <= End; i++)
Восстановить для i левое поддерево   - BuildTree(Start, i - 1)
Восстановить для i правое поддерево  - BuildTree(i - 1, End)
Перебрать все комбинации поддеревьев - двойная вложенность for() 

*/


struct TreeNode 
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:

    int Depth = 0;

    std::vector<TreeNode*> BuildTree(int Start, int End)
    {
        ///< Начало логов
        std::string Indent(Depth * 2, ' ');
        std::cout << Indent << "Entering: BuildTree(" << Start << ", " << End << ")\n";
        Depth++;
        // std::cout << "Start : " << Start << " " << "End : " << End << std::endl;
        ///< Конец логов

        /*
        При каждом вхождении в функцию создаем вектор нод дерева
        */
        std::vector<TreeNode*> Result;

        /*
        Так как у нас BST дерево, то левая нода не может быть больше правой
        */
        if (Start > End)
        {
            ///< Начало логов
            std::cout << Indent << "Base case: Start > End : (" << Start << ", " << End << ") - return {nullptr}\n";
            ///< Конец логов

            /*
            Говорим, что нет поддерва
            */
            Result.push_back(nullptr);
            return Result;
        }

        /*
        Начинаем перебирать все возможные вершины
        */
        for (int i = Start; i <= End; i++)
        {
            ///< Начало логов
            // std::cout << "i : " << i << std::endl;
            // std::cout << "i : " << i << " " << "Start : " << Start << " " << "End : " << End << std::endl;
            std::cout << Indent << "Trying root: " << i << " in range (" << Start << ", " << End << ")\n";
            ///< Конец логов

            /*
            Рекурсивно поднимаем левое поддерво для i
            */
            std::vector<TreeNode*> LeftSubTree = BuildTree(Start, i - 1);
            /*
            Рекурсивно поднимаем правое поддерево для i
            */
            std::vector<TreeNode*> RightSubTree = BuildTree(i + 1, End);

            ///< Начало логов
            std::cout << Indent << "  LeftSubTree count: " << LeftSubTree.size()
                      << " from (" << Start << ", " << i - 1 << ")\n";
            std::cout << Indent << "  RightSubTree count: " << RightSubTree.size()
                      << " from (" << i + 1 << ", " << End << ")\n";
            ///< Конец логов

            /*
            Начинаем прикреплять к i все варианты левых и правых поддеревьев
            */
            for (int j = 0; j < LeftSubTree.size(); j++)
            {
                for (int k = 0; k < RightSubTree.size(); k++)
                {
                    ///< Начало логов
                    std::cout << Indent << "    Creating tree with root: " << i
                              << " | left #" << j << " | right #" << k << "\n";
                    ///< Конец логов

                    TreeNode* pRoot = new TreeNode(i);
                    pRoot->left = LeftSubTree[j];
                    pRoot->right = RightSubTree[k];
                    Result.push_back(pRoot);
                }
            }
        }
        ///< Начало логов
        // std::cout << "Start : " << Start << " " << "End : " << End << std::endl;
        Depth--;
        std::cout << Indent << "Exiting: BuildTree(" << Start << ", " << End
                  << ") → built " << Result.size() << " trees\n";
        ///< Конец логов

        return Result;
    }

    std::vector<TreeNode*> generateTrees(int n)
    {
        return BuildTree(1, n);
    }
};

int main()
{
    Solution Daps;
    Daps.generateTrees(3);
    return 0;
}
