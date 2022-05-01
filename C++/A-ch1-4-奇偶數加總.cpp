#include <iostream>
using namespace std;

int main() {
    int i, n, sum_odd=0, sum_even=0;
    cout << "請輸入數字:";
    cin >> n;
    for (i=1; i<=n; i++){
        if (i % 2 == 1) 
            sum_odd = sum_odd + i;
        else
            sum_even= sum_even +i;
    }
    cout << "奇數總和:" << sum_odd  << endl;
    cout << "偶數總和:" << sum_even << endl;
    
    return 0;
}
