#include <iostream>
using namespace std;

int main(){
   int correct=7, guess;                                     
   cout<<"請在1~10之間猜一個數字:";
   cin>>guess;
   if( guess==correct ) 
        cout<<"恭喜你猜對了!"<<endl;   
   else if ( guess<correct )
        cout<<"猜的數字太小了"<<endl;
   else 
        cout<<"猜的數字太大了"<<endl;                
               
   return 0;
}