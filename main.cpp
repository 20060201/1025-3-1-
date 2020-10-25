#include <iostream>
using namespace std;

int main() {
    int InputNum = 0;
    int num[9];

    cin >> InputNum;

    num[0] = InputNum / 100000000;
    num[1] = (InputNum-num[0]*100000000) / 10000000;
    num[2] = (InputNum-num[1]*10000000) / 1000000;
    num[3] = (InputNum-num[2]*1000000) / 100000;
    num[4] = (InputNum-num[3]*100000) / 10000;
    num[5] = (InputNum-num[4]*10000) / 1000;
    num[6] = (InputNum-num[5]*1000) / 100;
    num[7] = (InputNum-num[6]*100) / 10;
    num[8] = (InputNum-num[7]*10) / 1;
 
 
    for (int i = 0; i< 9; i++) {


        cout << num[i] << "  " ;
    }
}