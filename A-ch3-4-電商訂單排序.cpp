#include <iostream>
using namespace std;

int main(){
    int a[9] = {17,5,3,11,16,10,23,6,8};
    int i, j, tmp, k;
    int swap=0, comp=0;
    for(i=1; i<9; i++){
        for(j=0; j<9-i; j++){
            comp = comp + 1;
            if(a[j] < a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                swap = swap + 1;
            }
        }
    }
    cout << "排序結果:";
    for (k=0;k<9;k++)
        cout << a[k] <<" ";
    cout << endl;
    cout << "交換次數:" << swap << endl;
    cout << "比較次數:" << comp << endl;
    return 0; 
}