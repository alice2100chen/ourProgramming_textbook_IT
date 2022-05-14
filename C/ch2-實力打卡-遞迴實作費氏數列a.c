#include <stdio.h>

int f(int n);
int main(){
    int i;
    for (i=0;i<10;i++)
        printf("%d\n", f(i));

    return 0; 
}

int f(int n){   
    if(n <= 1)          
        return 1;
    else
        return f(n-1) + f(n-2);
}