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


string  InfixToPostfix(string infix)
{
    stack <char> stk;
    string output = "";

    for (int i = 0; i < infix.length(); i++)
    {
        if (isspace(infix[i]))  continue;

        if (isdigit(infix[i]) || isalpha(infix[i]))
            output += infix[i];
        
        else if (infix[i] == '(')
            stk.push('(');
        
        else if (infix[i] == ')')
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
            while (!stk.empty() &&  Priority(infix[i]) <= Priority(stk.top()))
            {
                output += stk.top();
                stk.pop();
            }
            stk.push(infix[i]);
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
    string infix = "(3+2)+7/2*((7+3)*2)";

    cout << "Infix : " << InfixToPostfix(infix) << endl;


    return (0);
}
