#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

char askChar()
{
    char result;
    cin >> result;
    return result;
}

bool check(char x, char y)
{ // ascii of & is 38 and + is 43 and ! is 40
    return x == 40 ? true : x == 38 && y == 43 ? true
                                               : false;
}

void takeInput(stack<char> &ops, stack<char> &val)
{
    string brackets = "()";
    char word;
    bool shutdown = false;
    int bcount = 0;

    while (!shutdown)
    {
        word = askChar();
        switch (word)
        {
        case '&':
            if (ops.empty())
            {
                ops.push(word);
                break;
            }
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
            break;

        case '+':
            if (ops.empty())
                ops.push(word);
            else if (brackets.find(ops.top()) != std::string::npos)
                ops.push(word);
            else if (check(ops.top(), word)) // check if stack has higher precedence
            {
                val.push(ops.top());
                ops.pop();
                ops.push(word);
            }
            else
                ops.push(word);
            break;
        case '(':
            ops.push(word);
            bcount++;
            break;

        case ')':
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
            break;

        case '!':
            if (ops.empty())
                ops.push(word);
            else if (brackets.find(ops.top()) != std::string::npos)
                ops.push(word);
            else if (check(ops.top(), word)) // check if stack has higher precedence
            {
                val.push(ops.top());
                ops.pop();
                ops.push(word);
            }
            else
                ops.push(word);
            break;

        case '~':
            shutdown = true;
            break;

        default:
            val.push('1');
        }
    }

    while (!ops.empty())
    {
        val.push(ops.top());
        ops.pop();
    }
}

bool calculate(stack<char> val)
{
    vector<char> whydoidothis;
    stack<int> temp;
    string operators = "&+";
    while (!val.empty())
    {
        whydoidothis.push_back(val.top());
        val.pop();
    }
    reverse(whydoidothis.begin(), whydoidothis.end());

    for (auto i : whydoidothis)
    {
        if (i == '!')
        {
            int a = temp.top();
            temp.pop();
            if (a == 0)
                temp.push(1);
            else
                temp.push(0);
        }
        else if (operators.find(i) != std::string::npos)
        {
            int a = temp.top();
            temp.pop();
            int b = temp.top();
            temp.pop();

            switch (i)
            {
            case '&':
                temp.push(a * b);
                break;
            case '+':
                temp.push(a + b);
                break;
            }
        }
        else
            temp.push(i - '0');
    }

    return temp.top();
}

bool compute()
{
    stack<char> ops, val, temp;

    takeInput(ops, val);

    // temp = val; // output the stack that will be processed
    // while (!temp.empty())
    // {
    //     cout << temp.top() << endl;
    //     temp.pop();
    // }
    // return 1;

    bool result = calculate(val);

    return result;
}

int main()
{
    ios::sync_with_stdio(false);

    while (1)
    {
        bool result = compute();
        cout << result << endl;
    }
}