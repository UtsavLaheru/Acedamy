#include <stdio.h>
#include <string.h>

void main()
{
    char data[100],stuffedData[200];
    int i,count=0,j=0;
    
    printf("Enter Data:");
    scanf("%s",data);
    
    for(i=0;i<strlen(data);i++)
    {
        if(data[i] == '1')
        {
            count++;
            stuffedData[j++] = data[i];
        }
        else
        {
            count = 0;
            stuffedData[j++] = data[i];
        }
        
        if(count == 5)
        {
            count = 0;
            stuffedData[j++] = '0';
        }
    }
    stuffedData[j] = '\0';
    printf("StuffedData:%s\n",stuffedData);
}