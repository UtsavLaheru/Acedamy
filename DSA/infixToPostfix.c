#include <stdio.h>
#include <string.h>
#define MAX 50
char stack[MAX];
int top = -1;

void push(char value)
{
    if (top == MAX)
        printf("Stack Overflow\n");
    else
    {
        top = top + 1;
        stack[top] = value;
        // printf("Enter Number:");
        // scanf("%s", &value);
        // char value;
    }
}

int pop()
{
    if (top == -1)
        printf("Stack UnderFlow\n");
    else
    {
        int del;
        del = stack[top];
        top = top - 1;
        return del;
        // printf("POPED VALUE:%s", del);
    }
}

void peek()
{
    printf("Top:%c\n", stack[top]);
}

int priority(char p)
{
    if(p == '+' || p == '-')
        return 1;
    if(p == '*' || p == '/')
        return 2;
    if(p == '$')
        return 3;
    return 0;
}

void InfixtoPrefix(char *input,char *output)
{
    int j = 0;
    for(int i = 0;input[i] != '\0';i++)
    {
        // printf("runned over the For Loop\n");
        //Type Checking
        if((priority(stack[top]) == priority(input[i])) && top != -1)
        {
            output[j] = pop();
            j += 1;
            push(input[i]);
        }
        if((priority(stack[top]) < priority(input[i])) && (priority(input[i]) == 2 || priority(input[i]) == 3) && top != -1)
            push(input[i]);
        if((priority(stack[top]) > priority(input[i])) && (priority(input[i]) == 1 || priority(input[i]) == 2) && top != -1)
        {
            output[j] = pop();
            j += 1;
            push(input[i]);
        }
        //Direct Insertion
        if(input[i] >= 'a' && input[i] <= 'z' || input[i] >= 'A' && input[i] <= 'Z')
        {
            output[j] = input[i];
            j += 1;
        }
        if((input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/' || input[i] == '$') && top == -1)
            push(input[i]);
        // peek();
    }
    
    //Curruntly Working...
    while(top != -1)
    {
        output[j] = pop();
        j += 1;
        // printf("While Loop Runned\n");
        // printf("output:%c, %d\n", output[j-1], j);
    }
    output[j] = '\0';
}   

void main()
{
    char input[30];
    printf("Enter Infix:");
    scanf("%s", &input);
    char output[30];
    InfixtoPrefix(input, output);
    // printf("%d\n", strlen(output));
    printf("%s", output);
}
