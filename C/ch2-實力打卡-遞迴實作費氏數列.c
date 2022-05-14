#include <stdio.h>

int f(int n);
int main(){
    printf("%d", f(4));

    return 0; 
}

int f(int n){   
    if(n <= 1)          
        return 1;
    else
        return f(n-1) + f(n-2);
}