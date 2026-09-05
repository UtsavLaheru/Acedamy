#include <stdio.h>
#include <stdbool.h>
#define MAX 50
char stack[MAX];
int top = -1;
bool once = true;

void push(char value)
{
    if (top == MAX)
        printf("Stack Overflow\n");
    else
    {
        top = top + 1;
        stack[top] = value;
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

void display()
{
    for (int i=top; i != -1; i--)
        printf("%c", stack[i]);    
       // printf(" Stack:%c", stack[i]);
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

void table(char *input, char *output, int i, int j)
{
    if (once == true)
    {
        printf("infix      stack       postfix\n");
        printf("------------------------------\n");
        once = false;
    }
    printf("%c", input[i]);
    printf("            ");
    display();
    printf("%*s",top-12, "");
    if(j != 0)
    {
        for(int i=0;i < j; i++)
            printf("%c", output[i]);
    }
    printf("\n");
}

void InfixtoPrefix(char *input,char *output)
{
    int j = 0;
    for(int i = 0;input[i] != '\0';i++)
    {
        // printf("runned over the For Loop\n");
        //Type Checking
        if(top != -1)
        {
            
            if((priority(stack[top]) == priority(input[i])))
            {
                output[j] = pop();
                j += 1;
                push(input[i]);
                
            }
            if((priority(stack[top]) > priority(input[i])) && (priority(input[i]) == 1 || priority(input[i]) == 2))
            {
                output[j] = pop();
                j += 1;
                //Exception Handling for input's like "ip:+ stack:*+" and "ip:+ stack:$/";
                if((priority(stack[top]) == priority(input[i])) && top != -1)
                {
                    output[j] = pop();
                    j += 1;
                    push(input[i]);
                    
                }
                if((priority(stack[top]) > priority(input[i])) && (priority(input[i]) == 1 || priority(input[i]) == 2) && top != -1)
                {
                    output[j] = pop();
                    j += 1;
                    push(input[j]); 
                }
                else
                    push(input[i]);
                
            }
            if((priority(stack[top]) < priority(input[i])) && (priority(input[i]) == 2 || priority(input[i]) == 3))
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
        //Help's In Displaying Stack Contains.
        // peek();
        // display();
        
        //it Display's a output table
        table(input, output, i, j);
    }
    
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
    scanf("%s", input);
    char output[30];
    InfixtoPrefix(input, output);
    printf("------------------------------\n");
    printf("output:%21s\n", output);
}

//Learned:
// - Remember: To Output a Array of Characters (string) use "%s" instead of Loops.
// - do null or nullify the output last character (ex: output[j] = '\0') inorder to avoid garbage values.
