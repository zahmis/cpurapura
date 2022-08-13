#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int a,b,k;
    cin >> a >> b >> k;


int ans = 0;
 while(a<b){
    a = a*k;
    ans++;
 }
 cout << ans << endl;
    
  
return 0;
};
