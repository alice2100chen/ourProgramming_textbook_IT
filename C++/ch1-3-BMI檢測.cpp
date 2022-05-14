#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;
    cin >>weight >>height;
    height = height / 100;
    bmi = weight / (height * height);
    cout << "BMI值= " << bmi <<endl;
    if (bmi < 18.5) {
        cout <<"太輕了" <<endl;
    }
    else if (bmi < 24) {
        cout <<"正常" <<endl;
    }
    else{
         cout <<"太重了" <<endl;
    }
    return 0;
}
