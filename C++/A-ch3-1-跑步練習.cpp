#include <iostream>
using namespace std;

int main() {
    float d[7]={9,7.5,8,0,8.5,9.5,16};
    int i;
    float sum=0,avg;
 
    for (i=0; i< 7; i++)
        sum = sum + d[i];
    avg = sum / 7;
    cout << avg;
    
    return 0;
}

