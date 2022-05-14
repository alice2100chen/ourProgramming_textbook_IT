#include <stdio.h>

int main() {
    int s[5][4] ={{90,85,92,0},{95,91,96,0},{82,80,88,0},{91,90,85,0},{80,95,82,0}};
    int i,j;
    for (i=0; i<5; i++){
        for (j=0; j<3; j++)
            s[i][3] = s[i][3] + s[i][j];
    }
    
    for (i=0;i<5; i++)
        printf("%d ", s[i][3]);
    
    return 0;
}