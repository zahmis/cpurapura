#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

int main(void){
    int n;
    string s;
    cin >> n >> s;
    cout << s.substr(n - 1, 1);

    return 0;
}
