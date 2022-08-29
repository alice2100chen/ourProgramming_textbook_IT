#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float weight, height, bmi;
    cin >>weight >>height;
    height = height / 100;
    bmi = weight / (height * height);
    bmi = round(bmi * 100) / 100;
    cout << bmi <<endl;
    if (bmi < 18.5) {
        cout <<"heavy" <<endl;
    }
    else if (bmi < 24) {
        cout <<"normal" <<endl;
    }
    else{
         cout <<"heavy" <<endl;
    }
    return 0;
}
