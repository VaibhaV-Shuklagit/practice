// there are many ways we can print an array or a string ;
#include <stdio.h>
#include <string.h> //  to use puts() & gets() func
int main()
{
    char str[] = "World is Yours";
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]); // 1st and most common way
    }
    printf("\n");
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", *(i + str)); // 2nd way
    }
    printf("\n");
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", *(str + i)); // 3rd and similar to 2nd way
    }
    printf("\n");
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", i[str]); // 4th way
    }
    printf("\n");
    printf("%s", str); // 5th way and one of the most imp way
    printf("\n");
    puts(str);
    puts("str");
    puts("World is Yours");
}