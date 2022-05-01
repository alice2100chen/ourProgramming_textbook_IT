#include <iostream>
using namespace std;

int main() {
    int score[3]={90,85,92};
    int i,sum=0;
    float avg;
 
    for (i=0; i<3; i++)
        sum = sum + score[i];
    avg = sum / 3.0;
    cout << avg;
    
    return 0;
}

