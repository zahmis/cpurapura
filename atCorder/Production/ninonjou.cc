#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
 
int main(){

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
 }

 vector<int> b(3);
 b[0] = 0;
 b[1] = 0;
 b[2] = 0;

 int point = 0;
 for(int i = 0; i < n; i++) {
    if(a[i] == 1) {
      if(b[2] == 1) {
        point++;
        b[2] = 0;
      }
      if(b[1] == 1){
        b[2] = 1;
        b[1] = 0;
      }
      if(b[0] == 1) { b[1] = 1; }
      b[0] = 1;
    }
    if(a[i] == 2){
        if(b[2] == 1) {
          point++;
          b[2] = 0;
        }
        if(b[1] == 1){
          point++;
          b[1] = 0;
        }
        if(b[0] == 1) { b[2] = 1; }
        b[1] = 0;
        b[0] = 0;
    }
    if(a[i] == 3){
        if(b[2] == 1) { point++; }
        if(b[1] == 1){point++;}
        if(b[0] == 1) { point++; }
        b[2] = 1;
        b[1] = 0;
        b[0] = 0;
    }
    if(a[i] == 4){
        if(b[2] == 1) { point++; }
        if(b[1] == 1){point++;}
        if(b[0] == 1) { point++; }
        point++;
        b[0] = 0;
        b[1] = 0;
        b[2] = 0;
    }
 }


 cout<< point << endl;

  return 0;
};
