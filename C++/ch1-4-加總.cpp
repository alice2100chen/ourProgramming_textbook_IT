#include <iostream>
using namespace std;

int main() {
    int i, n, sum;
    cin >> n;
    sum=0;
    for (i=1; i<=n; i++)
        sum = sum + i;
    cout << sum;
    
    return 0;
}
