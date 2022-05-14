#include <iostream>
using namespace std;
int main() {
    string item[4]={"水壺","麵包機","行李箱","咖啡機"};
    int price[4]={100,1000,600,3000};
    int i;
    string name;

    cin >>name;
    for (i=0; i<4; i++){
        if (name == item[i]){
            cout <<"找到:" <<item[i] <<endl;
            cout <<"售價:" <<price[i];
        }    
    }
    return 0;
}