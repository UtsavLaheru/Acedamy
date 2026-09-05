#include <stdio.h>
#define MAX 5    //Use 10 After Testing.
int top = -1;
int stack[MAX];

void push(int value)
{
  if(top == MAX - 1)
  {
    top = 0;
    stack[top] = value;
  }
  else
  {
    top++;
    stack[top] = value;
  }
}

void pop()
{
  if(top == -1)
  {
    top = MAX-1;
  }
  printf("Deleted Values:%d\n", stack[top]);
  stack[top] = '\0';
  top--;
}

void display()
{
  printf("Stack Display:\n");
  for(int i=0;i != MAX; i++)
  {
    if(stack[i] == '\0')       //Comment this If You Can't Understand the Stack
    {
      continue;
    }
    printf("%d\n", stack[i]);
    // printf("%d %d\n", stack[i], i);
  }
}

// void clrscr()
// {
//   printf("\e[1J\e[H");
// }

int main()
{
  int i;
  int value;
  printf("Circular Stack\n");
  printf("1.Push\n");
  printf("2.Pop\n");
  printf("3.Display\n");
  printf("6.Exit\n");
  
  scanf("%d", &i);
  while(i != 6)
  {
    // clrscr();
    switch(i)
    {
      case 1:
        printf("What Do You Want To Push:");
        scanf("%d", &value);
        push(value);
        break;
      case 2:
        pop();
        break;
      case 3:
        display();
        break;
      case 6:
        printf("Exiting...");
        break;
      default:
        printf("You Have Entered Wrong Input");
        break;
    }
  }
  return 0;
}

//NOTE: The Display() is Still Rough It uses MAX Size Instead a Independent Pointer.
//TODO: (Optional) We Have To Find A Escape Character For Only Clearing Some Portion of the Screen.
//INFO:
// -We can Make Pop func by disallocating or Add Null Terminator.
//FUNFACT: In clrscr() \e[1J clears the screen, \e[H moves the cursor to the top-left corner.
