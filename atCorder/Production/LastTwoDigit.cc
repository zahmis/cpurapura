#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int x;
    cin >> x;

    const int third = x / 100;
    const int thirdProp = third * 100;

    const int second = (x - thirdProp) / 10;
    
    if(second == 0) cout << 0 << x-thirdProp << endl;
    else cout<< x-thirdProp << endl;
  return 0;
};
