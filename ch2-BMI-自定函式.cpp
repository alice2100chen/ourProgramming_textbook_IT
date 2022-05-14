#include <iostream>
using namespace std;

float f(float, float);
int main() {
    float weight, height, bmi;
    cout << "請輸入體重(公斤):";
    cin >>weight;
    cout << "請輸入身高(公分):";
    cin >>height;
    bmi = f(weight, height);
    cout << "BMI值= " << bmi;

    return 0;
}

float f(float w, float h){
    float b;
    h = h / 100;
    b = w / (h * h);
    return b;
}