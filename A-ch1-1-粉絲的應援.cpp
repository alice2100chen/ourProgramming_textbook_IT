#include <iostream>
#include <string>
using namespace std;

int main() {
    string yourName, superstarName, message;

    cout <<"請輸入你的名字: ";
    cin >> yourName;
    cout <<"請輸入籃球隊員名字: ";
    cin >> superstarName;
    cout <<"請輸入想對他說的話: ";
    cin >> message;

    cout << superstarName << endl;
    cout << message << endl;
    cout << "最愛你的粉絲 " << yourName << endl; 

    return 0;
}