#include <stdio.h>

int main(){
    int s[5] = {267,282,250,266,257};
    int i, max, min;
    max = s[0];
    min = s[0];
    for(i=1; i<5; i++){
        if (max < s[i])
            max = s[i];
        if (min > s[i])
            min = s[i];
    }
    printf("最大值:%d\n", max);
    printf("最小值:%d", min);
    
    return 0; 
}