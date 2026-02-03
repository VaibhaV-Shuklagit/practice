#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("x1 & y1 : ");
    scanf("%d%d",&x1,&y1);
    printf("x2 & y2 : ");
    scanf("%d%d",&x2,&y2);
    printf("x3 & y3 : ");
    scanf("%d%d",&x3,&y3);
    double s1 = (y2-y1)/(x2-x1);
    double s2 = (y3-y2)/(x3-x2);
    if(s1 = s2){
        printf("All the three points lie on a same line");
    }
    else{
        printf("They don't lie on a same line");
    }
    return 0;
}