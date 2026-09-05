#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int top = -1;

typedef struct stack{
  int data[MAX];
  int count;
}stack;


void push(int value, stack *st)
{
  if(top == MAX - 1)
    printf("Stack Overflow\n");
  else
  {
    top += 1;
    st->data[top] = value;
  }
}

void pop(stack *st)
{
  if(top == -1)
    printf("Stack UnderFlow\n");
  else
  {
    printf("Poped:%d\n", st->data[top]);
    top -= 1;
  }
}
// If You Have The Time And Make Print Format.
void display(stack *st)
{
  printf("In Stack:\n");
  printf("┌  ┐\n");
  for(int i=top;i != -1;i--)
  {
    printf("│%d",st->data[i]);
    printf("%*s│\n", st->data[i], "*");
  }
  printf("└──┘\n");
}

int main()
{
  stack *st = (stack*)malloc(sizeof(stack));
  int i;
  int value;
  while(i != 6)
  {
    printf("Enter:");
    scanf("%d", &i);
    switch(i)
    {
      case 1:
        printf("Enter Value:");
        scanf("%d", &value);
        push(value, st);
        break;
      case 2:
        pop(st);
        break;
      case 3:
        display(st);
        break;
      case 6:
        printf("Program Ended!\n");
        break;
      default:
        printf("You Have Entered Invaild Input\n");
        break;
    }
  }
  free(st);
  return 0;
}

// Only Shows The Last Pushed :)
// We Can Use Malloc If we want to use a stack pointer (*st) for stack manipulation.
// Refrence Video: https://www.youtube.com/watch?v=t7CUti_7d7c for detail
// understanding of how to declare and use malloc in struct made variable pointer.
