#include <stdio.h>

float f(float, float);
int main() {
    float weight, height, bmi;
    printf("請輸入體重(公斤):");
    scanf("%f", &weight);
    printf("請輸入身高(公分):");
    scanf("%f", &height);
    bmi = f(weight, height);
    printf("BMI值= %f", bmi);

    return 0;
}

float f(float w, float h){
    float b;
    h = h / 100;
    b = w / (h * h);
    return b;
}