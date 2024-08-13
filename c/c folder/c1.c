#include <stdio.h>
#include <string.h>
int main()
{
   char s[29];
   printf("Enter String:",s);
   gets(s);
   printf("Length Of Your String=%d \n", strlen(s));
   return 0;
}