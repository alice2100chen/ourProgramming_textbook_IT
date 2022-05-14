#include <stdio.h>
#include <string.h>

int main() {
    char * item[4]={"水壺","麵包機","行李箱","咖啡機"};
    int price[4]={100,1000,600,3000};
    int i;
    char name[100];

    scanf("%s", name);
    for (i=0; i<4; i++){
        if (strcmp(name, item[i]) == 0){
            printf("找到:%s\n", item[i]);
            printf("售價:%d", price[i]);
        }
    }
    return 0;
}