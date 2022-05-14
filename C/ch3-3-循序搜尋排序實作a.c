#include <stdio.h>

int main() {
    int a[8] = {3,6,1,8,4,5,7,2};
    int i,k;
 
    scanf("%d", &k);
    for (i=0; i<8; i++){
        if (a[i]==k)
            printf("找到了，在第%d個索引", i);
    }
    return 0;
}