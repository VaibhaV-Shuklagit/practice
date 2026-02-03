#include<stdio.h>
int main (){
    int a[10] , large , i ;
    for(i=0;i<10;i++){
        printf("Enter the Number : ");
        scanf("%d",&a[i]);

    }
    large = a[0];
    for(i=1;i<10;i++){
      if(a[i]>large){
        large = a[i];
      }  
}
printf("The largest Element is : %d",large);
return 0 ;
} // yaha humein pehle ek base value leni pdegi jo humne lower bound main hi daal di