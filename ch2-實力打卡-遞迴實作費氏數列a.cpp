#include <iostream>
using namespace std;
int f(int n){   
    if(n <= 1)          
        return 1;
    else
        return f(n-1) + f(n-2);
}

int main(){
    int i;
    for (i=0;i<10;i++)
        cout << f(i) <<" ";

    return 0; 
}