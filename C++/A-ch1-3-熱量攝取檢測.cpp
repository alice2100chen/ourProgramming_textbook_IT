#include <iostream>
using namespace std;

int main() {
    int calorie;
    cout << "請輸入這一餐的卡路里:";
    cin >>calorie;

    if (calorie < 1600) {
        cout <<"熱量不足!" << endl;
    }
    else if (calorie > 1900) {
        cout <<"熱量過度!" << endl;
    }
    else{
         cout <<"熱量適中!" << endl;
    }
    return 0;
}
