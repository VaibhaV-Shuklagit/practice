#include <stdio.h>
int main()
{
    struct Person
    {
        int salary; 
        int age;
        char name[15];
    }; 
    struct Person a , b ;
    printf("Enter Name of the first Person : ");
    scanf("%[^\n]s", a.name);
    printf("Enter the Age of the Second Person : ");
    scanf("%d", &b.age);
    printf("The Name of the First person is %s\n", a.name);
    
    printf("The age of the Second person is %d", b.age);
    return 0;
}