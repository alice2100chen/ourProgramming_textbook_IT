#include <stdio.h>

int main(){
    int a[5] = {3,2,4,5,1};
    int i, j, tmp, k;

    for(i=1; i<5; i++){
        for(j=0; j<5-i; j++){
            if(a[j] > a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
        printf("第%d回合結果:", i);
        for (k=0;k<5;k++)
            printf("%d ", a[k]);
        printf("\n");
    }

    return 0; 
}