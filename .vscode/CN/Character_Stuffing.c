#include <stdio.h>
#include <string.h>

int main()
{
    char data[40],stuffedData[100] = " ",t[3],sd,ed,x[3],y[3],s[3],d[3];
    int i;
    printf("Enter Charater For Character Stuffing:");
    scanf("%s",data);
    
    printf("\nEnter Starting of delimiter:");
    scanf(" %c",&sd);
    
    printf("\nEnter End of delimiter:");
    scanf(" %c",&ed);
    x[0] = s[0] = s[1] = sd;
    x[1] = s[2] = '\0';
    y[0] = d[0] = d[1] = ed;
    y[1] = d[2] = '\0';
    strcat(stuffedData,x);
    for(i=0;i < strlen(data);i++)
    {
        t[0] = data[i];
        t[1] = '\0';
        if(t[0] == sd)
        {
            strcat(stuffedData,s);
        }
        else if(t[0] == ed)
        {
            strcat(stuffedData,d);
        }
        else
        {
            strcat(stuffedData,t);
        }
    }
    strcat(stuffedData,y);
    printf("Stuffed Character:%s",stuffedData);
    getchar();
}