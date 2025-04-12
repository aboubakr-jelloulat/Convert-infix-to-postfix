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


string  PostfixToInfix(string Postfix)
{
    stack <char> stk;
    string output = "";

    for (int i = 0; i < Postfix.length(); i++)
    {
        if (isspace(Postfix[i]))  continue;

        if (isdigit(Postfix[i]) || isalpha(Postfix[i]))
            output += Postfix[i];
        
        else if (Postfix[i] == '(')
            stk.push('(');
        
        else if (Postfix[i] == ')')
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
            while (!stk.empty() &&  Priority(Postfix[i]) <= Priority(stk.top()))
            {
                output += stk.top();
                stk.pop();
            }
            stk.push(Postfix[i]);
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
    string postfix = "(3+2)+7/2*((7+3)*2)";

    cout << "Postfix : " << PostfixToInfix(postfix) << endl;


    return (0);
}
