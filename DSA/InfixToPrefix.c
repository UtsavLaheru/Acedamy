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
        printf("%d. Stack:%c\n", i, stack[i]);
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
    for(int i = strlen(input) - 1;i >= 0;i--)
    {
        // printf("runned over the For Loop\n");
        //Type Checking
        if((priority(stack[top]) == priority(input[i])) && top != -1)
            push(input[i]);
        if((priority(stack[top]) > priority(input[i])) && (priority(input[i]) == 1 || priority(input[i]) == 2) && top != -1)
        {
            output[j] = pop();
            j += 1;

            //Exception Handling for input's like "ip:+ stack:$/" and "ip:+ stack:/*/$...";
            if((priority(stack[top]) > priority(input[i])) && (priority(input[i]) == 1 || priority(input[i]) == 2) && top != -1)
            {
                while(stack[top] > priority(input[i]))
                {
                    output[j] = pop();
                    j += 1;
                }
                push(input[i]);
            }
            else
                push(input[i]);

        }
        if((priority(stack[top]) < priority(input[i])) && (priority(input[i]) == 2 || priority(input[i]) == 3) && top != -1)
            push(input[i]);

        //Direct Insertion
        if(input[i] >= 'a' && input[i] <= 'z' || input[i] >= 'A' && input[i] <= 'Z')
        {
            output[j] = input[i];
            j += 1;
        }
        if((input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/' || input[i] == '$') && top == -1)
            push(input[i]);

        //Help's In Displaying Stack Contains.
        // printf("%c\n",input[i]);
        // peek();
        // display();
    }

    while(top != -1)
    {
        output[j] = pop();
        j += 1;
        // printf("While Loop Runned\n");
    }
    output[j] = '\0';
}

void ReverseString(char *string)
{
    int left = 0;
    int right = strlen(string)-1;
    char temp;
    
    while(left < right)
    {
        temp = string[left];
        string[left] = string[right];
        string[right] = temp;
        
        left++;
        right--;
    }
}


//Currnetly Working...

void main()
{
    char input[30]; 
    printf("Enter Infix:"); 
    scanf("%s", &input);
    char output[30];
    InfixtoPrefix(input, output);
    ReverseString(output);
    printf("%s", output);
}

//Learned:
// - In Prefix the '==' precedence is push the charcter in stack (ex: ip:+ stack:+ is stack:++), instead of pop (which we do in infix to postfix).
// - Remember: To Output a Array of Characters (string) use "%s" instead of Loops.
// - do null or nullify the output last character (ex: output[j] = '\0') inorder to avoid garbage values.