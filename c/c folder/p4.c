#include<stdio.h>
int main()
{
    int n1,n2,i,j;
    printf("Enter Number:");
    scanf("%d",&n1);
    printf("Enter Number:");
    scanf("%d",&n2);
    printf("\n");
    printf("To Perform Addition(+) Enter 1\n");
    printf("To Perform subtraction(-) Enter 2\n");
    printf("To Perform Division(/) Enter 3\n");
    printf("To Perform Multiplication(*) Enter 4\n");
    printf("Enter Oprator:");
    scanf("%d",&i);
    switch (i)
    {
    case 1:
        j=n1+n2; 
        printf("%d",j);
        break;
    case 2:
        j=n1-n2;
        printf("%d",j);
        break;
    case 3:
        j=n1/n2;
        printf("%d",j);
        break;
    case 4:
        j=n1*n2;
        printf("%d",j);
        break;
    default:
        printf("Enter Vaild Input!!");
        break;
    }
}