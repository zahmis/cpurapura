#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

int main(void){
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int ttime = A * 60*60 + B*60;
    int atime = C * 60*60 + D*60 + 1;

    if (ttime < atime) cout << "Takahashi";
    else cout << "Aoki";

    return 0;
}
