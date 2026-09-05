#include <stdio.h>
// #include <conio.h>
int input()
{
    int n, u = 0, n2 = 0;
    printf("Enter Root:");
    scanf("%d", &n);
    
    printf("Enter The Number Of Nodes:");
    scanf("%d", &n2);
    int arr[n2];
    for (int i=1;i<=n2;i++)
    {
        printf("Enter Node:");
        scanf("%d",&arr[i]);   
    }
     for (int i=1;i<=n2;i++)
    {
        printf("%d ",arr[i]);           
    }
    printf("\n");
    printf("left Subtree:");
    for (int i=1;i<=n2;i++)
    {
        if (n>arr[i])
        {
            printf("%d ",arr[i]);
        }  
    }
    printf("\n");
    printf("Right Subtree:");
    for(int i=1;i<=n2;i++)
    {
        if(n<arr[i])
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
};
int main()
{
    input();
}
