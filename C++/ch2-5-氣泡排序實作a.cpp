#include <iostream>
using namespace std;

int main(){
    int a[5] = {3,1,4,5,2};
    int i, j, tmp;

    for(i=1; i<5; i++){
        for(j=0; j<=5-i; j++){
            if(a[j] > a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }

    return 0; 
}