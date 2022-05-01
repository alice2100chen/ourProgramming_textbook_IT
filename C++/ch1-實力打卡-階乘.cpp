#include <iostream>
using namespace std;
int main() {
    int i, n, prod;
    cin >> n;
    prod=1;
    for (i=1; i<=n; i++)
        prod = prod * i;
    cout << prod;
    
    return 0;
}
