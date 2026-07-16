#include <stdio.h>
#include <string.h>

void ReverseString(char *string)
{
    int left = 0;
    int right = strlen(string)-1;
    char temp;
    
    while(left < right)
    {
        temp = string[left];
        string[left] = string[right];
        string[right] = temp;
        
        left++;
        right--;
    }
}

int main()
{
    char test[30] = "Hello World";
    ReverseString(test);
    printf("%s",test);
    return 0;
}
