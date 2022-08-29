#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float c, h, s, x;
    cin >> h;
    cin >>c;
    cin >>s;
    x = c - (h / 1000) * 6 - pow(s,0.5);
    x = round(x * 100) / 100;
    cout << x;
    
    return 0;
}
