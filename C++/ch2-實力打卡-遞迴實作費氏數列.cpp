#include <iostream>
using namespace std;

int f(int n);

int main(){
    cout << f(4);

    return 0; 
}

int f(int n){   
    if(n <= 1)          
        return 1;
    else
        return f(n-1) + f(n-2);
}