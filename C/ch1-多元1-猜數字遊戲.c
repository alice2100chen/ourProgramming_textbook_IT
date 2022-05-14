#include <stdio.h>

int main(){
   int correct=7, guess;              
   printf("請在1~10之間猜一個數字: ");
   scanf("%d", &guess);
   if( guess==correct ) 
        printf("恭喜你猜對了!");   
   else if ( guess<correct )
        printf("猜的數字太小了"); 
   else 
        printf("猜的數字太大了"); 
               
   return 0;
}