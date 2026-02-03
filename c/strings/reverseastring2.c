#include <stdio.h>
#include <string.h>
int main()
{
    char str[40];
    puts("Enter the Sring : ");
    gets(str);
    int count = 0;
    int i = 0 ;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
   for(int i = 0,j=count-1;i<=j;i++,j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts("its reverse is : ");
    puts(str);
}
