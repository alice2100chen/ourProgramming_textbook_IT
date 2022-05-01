#include <iostream>
using namespace std;

int main(){
    int s[5] = {267,282,250,266,257};
    int i, max, min;
    max = s[0];
    min = s[0];
    for(i=1; i<4; i++){
        if (max < s[i])
            max = s[i];
        if (min > s[i])
            min = s[i];
    }
    cout <<"最大值:"<< max << endl;
    cout <<"最小值:"<< min;
    
    return 0; 
}