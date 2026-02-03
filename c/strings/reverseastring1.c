#include <stdio.h>
#include <string.h>
int main()
{
    char str[40];
    puts("Enter the Sring : ");
    gets(str);
    int count = -1;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    for (int i = 0; i < (count + 1) / 2; i++)
    {
        char temp = str[i];
        str[i] = str[count - i];
        str[count - i] = temp;
    }
    puts("its reverse is : ");
    puts(str);
}
      