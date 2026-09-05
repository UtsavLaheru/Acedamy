#include <stdio.h>

void main()
{
   //Size of Pointer
   int *ptr1 = NULL;
   char *ptr2 = NULL;

   printf("Size of ptr1:%ld\n", sizeof(ptr1));
   printf("Size of ptr2:%zu\n", sizeof(ptr2));

   int val = 20;
   int *d_ptr = &val;
   void *ptr = &val;      //Can Use int *ptr it works the same but more explicit and we can Derefrence Pointer Value
   
   printf("Value of Pointer:%p\n", ptr); 
   printf("Value of Dereference Pointer:%d\n", *d_ptr);     //Pointing to the val which is 20

   void *p = ptr;       //If You Use &ptr it gives *ptr address rather then actual val address
   int *chain_p = p;

   printf("Value of P:%p\n", p);
   printf("Chained Dereference Pointer:%d\n", *chain_p);
}

//FUN FACT:-
//--If You are using a sizeof() operator or displaying array.length always use
//  %zu instead of %d,%ld,%lu because they represent size_t for better portability.
//--We can Derefrence the Pointer if it has same data type (*d_ptr) as the
//  given address (val) use the same print display operator (%d) to display value
//  and at the printing or refrencing time use "*" statement (*d_ptr) to reference
//  the original value (val).
//--We can Deference Pointer if the original value (val) is same as the one (*chain_p)
//  we are creating then we can still refrence the original value no matter whatever
//  type of pointer is referncing or giving it (void *p)

// HAVE FUN :)

