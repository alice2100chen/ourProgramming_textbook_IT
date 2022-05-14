#include <iostream>
using namespace std;

int f(int);
int main(){
    cout << f(3) << endl; 
    cout << f(10) << endl;

    return 0; 
}

int f(int n){   
    if(n <= 1)          
        return 1;
    else
        return n * f(n-1);
}