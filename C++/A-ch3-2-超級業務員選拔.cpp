#include <iostream>
using namespace std;

int main() {
    int s[6][5] ={{31,52,32,58,0},{25,38,16,68,0},{53,62,35,77,0},{21,36,24,45,0},{43,45,48,53,0},{23,65,55,32,0}};
    int i,j;
    for (i=0; i<6; i++){
        for (j=0; j<4; j++)
		    s[i][4] = s[i][4] + s[i][j];
    }
    
    for (i=0;i<6; i++)
        cout << s[i][4] <<" ";
    
    return 0;
}