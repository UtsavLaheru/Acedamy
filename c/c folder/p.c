#include <stdio.h>

void main()
{
    int a[] = {1,2,3,4,5};
    int sum = 0;
    for (int i=0;i<5;i++)
    {
        if (i % 2 == 0){
            sum += a[i];
            // printf("%d\n", sum);
        }
        
    }
    printf("%d", sum);
}