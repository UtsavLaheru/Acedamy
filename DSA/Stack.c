#include <stdio.h>
#define max 5
int stack[max];
int top = -1;
void display();
void push();
void pop();
void tops();
void change();

void main()
{
    int a;
    printf("Option Menu For Stack \n");
    printf("1.Push \n");
    printf("2.Pop \n");
    printf("3.Top \n");
    printf("4.Display \n");
    printf("5.Change\n");
    printf("6.Quit\n");
    while (a != 6)
    {
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
            change();
            break;
        case 6:
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
    if (top < 0)
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
    printf("Display:\n");
    for (int i=top; i > -1; i--)
    {
        printf("%d\n", stack[i]);
    }
}

void change()
{
    int target_index,value;
    printf("Enter Index:");
    scanf("%d",&target_index);
    for (int i=top; i > -1; i--)
    {
        if(target_index == i)
        {
            printf("Enter Number:");
            scanf("%d",&value);
            stack[target_index] = value;
        }
        if(target_index > top)
        {
            printf("index Is Out Of Bound\n");
        }
    }
}