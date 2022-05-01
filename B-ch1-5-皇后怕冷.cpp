#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float c=20, h=1545, s=12, x;
    
    x = c - (h / 1000) * 6 - pow(s,0.5);
    cout << x;
    
    return 0;
}
