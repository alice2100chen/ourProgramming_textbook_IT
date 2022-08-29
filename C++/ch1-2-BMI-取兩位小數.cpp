#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float weight, height, bmi;
    cout << "請輸入體重(公斤):";
    cin >>weight;
    cout << "請輸入身高(公分):";
    cin >>height;
    height = height / 100;
    bmi = weight / (height * height);
    bmi = round(bmi * 100) /100;
    cout << "BMI值= " << bmi;

    return 0;
}

