#include <stdio.h>
#include <math.h>

int main() {
    float weight, height, bmi;
    printf("請輸入體重(公斤):");
    scanf("%f", &weight);
    printf("請輸入身高(公分):");
    scanf("%f", &height);
    height = height / 100;
    bmi = weight / pow(height, 2);
    printf("BMI值= %f", bmi);

    return 0;
}