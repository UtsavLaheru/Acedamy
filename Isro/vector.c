#include <stdio.h>

typedef struct Vector{
  int *data;
  int size;
  int capcity;
}Vector;


Vector arr[30];

void pushdown(int value)
{
  if(size > capcity)
    printf("Vector Overflow");
  else
  {
    arr[30] = value;
    size += 1;
  }
}


// void pushdown(int *v, int value)
// void vector_insert_data(int *data)
// void vector_remove_data(int *data, int size)
void main()
{
  int value = 10;
  pushdown(value);
  
  // vector_insert_data(*data);
  // vector_remove_data(*data, size)
}

// we are going to use only neccessary operations of vector
// like pushdown, remove, iterations.
