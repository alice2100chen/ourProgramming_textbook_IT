
#include <iostream>
using namespace std;

int main()
{
    int number[10]={66, 75, 76, 82, 84, 85, 68, 47, 92, 46};
    int i, n, found;
    cout << "請輸入號碼: ";
    cin >> n;
    found = -1;
    for (i=0; i<10; i++) 
        if (number[i] == n) 
            found = 0;

    if (found == 0) 
        cout << "恭禧中獎！太幸運了！";
    else
        cout << "銘謝惠顧！下次加油！";
    return 0;
}

