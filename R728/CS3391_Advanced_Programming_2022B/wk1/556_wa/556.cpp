#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <stack>
using namespace std;

char askChar()
{
    char result;
    cin >> result;
    return result;
}

bool check(char x, char y)
{ // ascii of & is 38 and + is 43
    return x < y;
}

void compute()
{
    string operators = "&+";
    string brackets = "()";
    stack<char> ops, val;
    char word;
    bool skip = false;
    int bcount = 0;

    while (1)
    {
        word = askChar();
        if (word == '~')
            break;

        if (brackets.find(word) != std::string::npos)
        {
            if (word == '(')
                ops.push(word);
            else
            {
                while (!ops.empty())
                {
                    if (ops.top() == '(')
                    {
                        ops.pop();
                        bcount--;
                        if (bcount == 0)
                            break;
                        else
                            continue;
                    }
                    val.push(ops.top());
                    ops.pop();
                }
            }
        }
        else if (operators.find(word) != std::string::npos)
        {
            if (ops.top() != word)
            {
                if (brackets.find(ops.top()) != std::string::npos)
                    ops.push(word);
                else if (check(ops.top(), word)) // check if stack has higher precedence
                {
                    val.push(ops.top());
                    ops.pop();
                    ops.push(word);
                }
                else
                    ops.push(word);
            }
            else
                ops.push(word);
        }
        else if (word == '!')
        {
            val.push(0); // push false, i do this so its easier
            skip = true;
        }
        else if (skip)
            continue;
        else
            val.push(1); // push true
    }

    while (!ops.empty())
    {
        val.push(ops.top());
        ops.pop();
    }

    stack<char> temp = ops;
    while (!temp.empty())
    {
        cout << temp.top() << endl;
        temp.pop();
    }
    temp = val;
    while (!temp.empty())
    {
        cout << temp.top() << endl;
        temp.pop();
    }
}

int main()
{
    ios::sync_with_stdio(false);

    while (1)
    {
        bool result;

        compute();

        // while (1)
        // {
        //     char word = askChar();
        //     if (word == '~')
        //         break;
        //     else
        //         query.push(word);
        // }
        // while (!query.empty())
        // {
        //     cout << query.top() << endl;
        //     query.pop();
        // }
    }
}