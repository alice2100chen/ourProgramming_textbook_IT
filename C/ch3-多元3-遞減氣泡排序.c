#include <stdio.h>

int main(){
    int a[6] = {3, 8, 4, 2, 5, 7};
    int i, j, tmp, k;

    for(i=1; i<6; i++){
        for(j=0; j<6-i; j++){
            if(a[j] < a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
        printf("第%d回合結果:", i);
        for (k=0;k<6;k++)
            printf("%d ", a[k]);
        printf("\n");
    }

    return 0; 
}