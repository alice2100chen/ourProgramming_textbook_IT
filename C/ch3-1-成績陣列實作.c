#include <stdio.h>

int main() {
    int score[3]={90,86,92};
    int i,sum=0;
    float avg;
 
    for (i=0; i<=2; i++)
        sum = sum + score[i];
    avg = sum / 3.0;
    printf("%f", avg);
    
    return 0;
}