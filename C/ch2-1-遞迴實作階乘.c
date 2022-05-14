#include <stdio.h>

int f(int);
int main(){
    printf("3!= %d\n", f(3));
    printf("10!= %d\n", f(10));
    
    return 0; 
}

int f(int n){   
    if(n <= 1)          
        return 1;
    else
        return n * f(n-1);
}