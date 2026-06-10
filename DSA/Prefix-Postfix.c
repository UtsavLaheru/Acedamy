#include <stdio.h>
#define MAX 50
char stack[MAX];
int top = -1;

void push(char value)
{
    if (top == MAX)
    {
        printf("Stack Overflow");
    }
    else
    {
        top = top + 1;
        stack[top] = value;
    }
}

int pop()
{
    int del;
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        del = stack[top];
        top = top - 1;
        return del;
    }
}
    
int peek()
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        return stack[top];
    }
    return 0;
}

int priority(char p)
{
    if (p == '+' || p == '-')
    {
        return 3;
    }
    if (p == '/' || p == '*')
    {
        return 2;
    }
    if (p == '$' || p == '^')
    {
        return 2;
    }
    return 0;
}

void Postfix(char io[], char op[])
{
    int j = -1;
    // char ch;
    for (int i = 0; io[i] != '\0'; i++)
    {
        // printf("%c\n",io[i]);
        if ((io[i] >= 'a' && io[i] <= 'z') || (io[i] >= 'A' && io[i] <= 'Z'))
        {
            j = j + 1;
            op[j] = io[i];
            // printf("%c\n",op[j]); 
        }
        if ((io[i] == '+' || io[i] == '-' || io[i] == '/' || io[i] == '*' || io[i] == '$' || io[i] == '^') && top == -1)
        {
            push(io[i]);
        }

        if (io[i] == '(')
        {
            push(io[i]);
        }
        if (io[i] == ')')
        {
            while (peek() != '(')
            {
                j = j + 1;
                op[j] = pop();
                // printf("%c",op[j]);
            }
        }
        if (priority(io[i]) < priority(peek()))
        {
            j = j + 1;
            op[j] = pop();
        }
        if (priority(io[i]) == priority(peek()))
        {
            printf("if ranned");
            j = j + 1;
            op[j] = pop();
            push(io[i]);

        }
        if (priority(io[i]) > priority(peek()))
        {
            push(io[i]);
        }
    }
    
}

int main()
{
    char io[10] = "a+b(a+b-c)";
    char op[10] = {};
    Postfix(io, op);

    for(int i=0;stack[i] != '\0';i++)
    {
        printf("%c\n",stack[i]);
    }
    return 0;
}
