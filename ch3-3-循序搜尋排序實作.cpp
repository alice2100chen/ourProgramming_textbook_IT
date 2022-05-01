#include <iostream>
using namespace std;

int main() {
    int a[8] = {3,6,1,8,4,5,7,2};
    int i,k,found=0;
 
    cin >>k;
    for (i=0; i<8; i++){
        if (a[i]==k){
            cout <<"找到了，在第" <<i <<"個索引";
            found = 1;
            break;
        }
    }
    if (found ==0)
        cout <<"找不到";
    
    return 0;
}