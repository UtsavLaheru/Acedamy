#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n/i==i)
        {
            if(i*i==n)
            {
                printf("%d",i);
            }
        }
    }
    return 0;
}