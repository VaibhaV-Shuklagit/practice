#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct student
{
    int roll;
    int yearofjoining;
    char name[15];
    char department[25];
} student;
void comp(student a, student b)
{
    char str[25];
    strcpy(str,a.department);
    char str1[25];
    strcpy(str1,b.department);
    bool flag = true ;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != str1[i])
        {
            printf("Both Students Have Different Department");
            flag = false ;
            break;
        }  
    }
    if(flag == true){
         printf("Both Students Have Same Department");
         return ;
    }
}
int main()
{
    student a, b;
    strcpy(a.name, "Rohan");
    strcpy(a.department, "School of Computing");
    a.roll = 98;
    a.yearofjoining = 2025;
    strcpy(b.name, "Rahul");
    strcpy(b.department, "School of Electronics");
    a.roll = 90;
    a.yearofjoining = 2025;
    comp(a, b);
    printf("%d",a.roll+a.yearofjoining);
    return 0;
}