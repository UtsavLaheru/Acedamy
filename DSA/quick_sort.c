#include <stdio.h>
#define max 5
int stack[max];
int top = -1;

void push()
{
    int value;
    if (top == max)
    {
        printf("Stack Overflow");
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
        printf("Stack Underflow");
    }
    else
    {
        top = top - 1;
    }
}

// void swap(int *x,int *y)
// {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }

void quicksort()
{
    int high = stack[top];
    int low = stack[0];
    int pivot = stack[low];
    int i = low;
    int j = high;
    printf("i:%d",i);
    printf("j:%d",j);
    int k;
    while(pivot > stack[i])
    {
        stack[i] = stack[i] - 1;
        // printf("i:%d",i);
    }
    while(pivot < stack[j])
    {
        stack[j] = stack[j] - 1;
        // printf("j:%d",j);
    }
    if (stack[i] < stack[j])
    {
        int temp;
        temp = stack[j];
        stack[j] = stack[i];
        stack[i] = temp;
    }
    // printf("%d\n",stack[top]);
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n",stack[i]);
    }
    
}

void main()
{
    int a;
    while (a != 4)
    {
        printf("Option Menu For Stack \n");
        printf("1.Push \n");
        printf("2.Pop \n");
        printf("3.qicksort \n");
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
            quicksort();
            break;
        case 4:
            printf("Quitting");
            break;
        default:
            printf("You Have Entered Wrong Number\n");
            break;
        }
    }
}

