#include <stdio.h>

int main() {
    float weight, height, bmi;
    printf("請輸入體重(公斤):");
    scanf("%f", &weight);
    printf("請輸入身高(公分):");
    scanf("%f", &height);
    height = height / 100;
    bmi = weight / (height * height);
    printf("BMI值= %f\n", bmi);
    if (bmi < 18.5) {
        printf("太輕了");
    }
    else if (bmi < 24) {
        printf("正常");
    }
    else{
         printf("太重了");
    }
    return 0;
}

