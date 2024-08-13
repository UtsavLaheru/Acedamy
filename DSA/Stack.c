#include <stdio.h>
#define max 5
int stack[5];
int top = -1;
void display();
void push();
void pop();
void tops();

void main()
{
    int a;
    while (a != 5)
    {
        printf("Option Menu For Stack \n");
        printf("1.Push \n");
        printf("2.Pop \n");
        printf("3.Top \n");
        printf("4.Display \n");
        printf("5.Exit\n");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            tops();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Quitting");
            break;
        default:
            printf("You Have Entered Wrong Number\n");
            break;
        }
    }
}

void push()
{
    int value;
    if (top == max)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter Number:");
        scanf("%d", &value);
        top = top + 1;
        stack[top] = value;
    }
}

void pop()
{
    if (top <= 0)
    {
        printf("Stack Underflow\n");
    }
    int del;
    del = stack[top];
    top = top - 1;
    printf("POPED Number: %d\n", del);
}

void tops()
{
    printf("Displaying Top Pointer Number:%d\n", stack[top]);
}

void display()
{
    for (int i=top; i > -1; i--)
    {
        printf("%d\n", stack[i]);
    }
}