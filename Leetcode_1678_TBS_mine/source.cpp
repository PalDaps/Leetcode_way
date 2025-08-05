#include <iostream>

/*

05.08.2025
21:56

Задача : "G()()()()(al)" -> Gooooal. () -> o, (al) - al, G -> G

Идея: Чтобы новую строку не создавать можно просто в начало старой добавлять символ и в конце сделать resize. 
Size посчитать до цикла. 

*/


class Solution {
public:
    std::string interpret(std::string command)
    {
        size_t j = 0;
        size_t Size = command.size();
        for (size_t i = 0; i < Size; i++)
        {
            char Elem = command[i];
            if (Elem == 'G') command[j++] = 'G';
            else if (Elem == '(')
            {
                Elem = command[++i];
                if (Elem == ')') command[j++] = 'o';
                else if (Elem == 'a')
                {
                    command[j++] = 'a';
                    command[j++] = 'l';
                    i += 2;
                }
            }

        }
        command.resize(j);
        return command;
    }
};