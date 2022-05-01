#include <iostream>
using namespace std;

int main(){
    int a[5] = {3,2,4,5,1};
    int i, j, tmp,k;

    for(i=1; i<5; i++){
        for(j=0; j<=5-i; j++){
            if(a[j] > a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
        cout <<"第"<<i <<"回合結果:";
        for (k=0;k<5;k++)
            cout << a[k] <<" ";
        cout <<endl;
    }

    return 0; 
}