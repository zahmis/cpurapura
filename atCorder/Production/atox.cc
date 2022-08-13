#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;


 
int main(){
  int n,x;
    cin >> n >> x;
    int target = (x+n-1)/n - 1;
    char alphabet[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    cout << alphabet[target] << endl;

    

return 0;
};
