#include <iostream>
using namespace std;
int main() {
    string stu[4]={"Alice","Bob","Cathy","David"};
    int i;
    string name;

    cin >>name;
    for (i=0; i<4; i++){
        if (name == stu[i])
            cout <<"找到了，在第" <<i <<"個";
    }
    return 0;
}