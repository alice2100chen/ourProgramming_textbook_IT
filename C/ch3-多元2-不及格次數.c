#include <stdio.h>

int main(){
    int s[3][4]={{92,87,82,56},{88,82,77,62},{52,71,48,68}};
    int i,j;
    int found=0;
    for (i=0; i<3; i++)
       for (j=0; j<4; j++)
            if (s[i][j] < 60)
                found = found +1;
    printf("不及格次數:%d", found);
    
    return 0; 
}