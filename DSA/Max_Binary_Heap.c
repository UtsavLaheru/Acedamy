#include <stdio.h>
#include <math.h>
#define MAX 100
int arr[MAX];
int top = -1;

void heapInsert()
{
  int value;
  if(top == -1)
  {
    printf("Enter The Root Node:");
    scanf("%d", &value);
    top++;
    arr[top] = value;
  }
  if(top == MAX - 1)
    printf("Array Is Full or OverFlow");
  else
  {
    printf("Enter Value:");
    scanf("%d", &value);
    if(arr[top] > value)
    {
      top = top * 2;
      arr[top] = value;
    }
    else
      printf("Invalid or Value is Higher then Root In Input\n"
             "(Which Not Allowed in Max Heap)\n");
  }
}
//Currently Working...
int main()
{
  heapInsert();
  return 0;
}
