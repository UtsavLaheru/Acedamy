#include <stdio.h>

void main()
{
    int p, j, s;
    printf("Enter The Multipation Table:");
    scanf("%d", &p);
    for (j = 1; j <= 10; j++)
    {
        if (p > 0)
        {
            s = p * j;
            printf("Sum of %d = %d\n", j, s);
        }
    }
}