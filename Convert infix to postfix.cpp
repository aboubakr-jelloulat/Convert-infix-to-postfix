#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

int Priority(char c)
{
    switch (c)
    {
    case '-':
    case '+':
        return 1;

    case '*':
    case '/':
        return 2;

    case '^':
        return 3;

    default:
        return -42;
    }
}


string  InfixToPostfix(string Infix)
{
    stack <char> stk;
    string output = "";

    for (int i = 0; i < Infix.length(); i++)
    {
        if (isspace(Infix[i]))  continue;

        if (isdigit(Infix[i]) || isalpha(Infix[i]))
            output += Infix[i];
        
        else if (Infix[i] == '(')
            stk.push('(');
        
        else if (Infix[i] == ')')
        {
            while (stk.top() != '(' )
            {
                output += stk.top();
                stk.pop();
            }
            stk.pop(); // Remove last (

        }
        else
        {
            while (!stk.empty() &&  Priority(Infix[i]) <= Priority(stk.top()))
            {
                output += stk.top();
                stk.pop();
            }
            stk.push(Infix[i]);
        }

    }

    while (!stk.empty())
    {
        output += stk.top();
        stk.pop();
    }

    return (output);
}

int main(void)
{
    string Infix = "(3+2)+7/2*((7+3)*2)";

    cout << "Postfix : " << InfixToPostfix(Infix) << endl;


    return (0);
}