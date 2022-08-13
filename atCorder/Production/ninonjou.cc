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
    if(a[i] == 1) { // 安打
      if(b[2] == 1) { // 三塁にいる
        point++; // ポイント加算
        b[2] = 0; // 三塁を抜く
      }
      if(b[1] == 1){ // 二塁にいる
        b[2] = 1; // 三塁に進塁する
        b[1] = 0; // 二塁を抜く
      }
      if(b[0] == 1) { // 一塁にいる
         b[1] = 1;  // 二塁に進塁する
          b[0] = 0; // 一塁を抜く
      }
      b[0] = 1; // 一塁に進塁する
    }
    if(a[i] == 2){ // 二塁打
        if(b[2] == 1) { // 三塁にいる
          point++; // ポイント加算
          b[2] = 0; // 三塁を抜く
        }
        if(b[1] == 1){ // 二塁にいる
          point++; // ポイント加算
          b[1] = 0; // 二塁を抜く
        }
        if(b[0] == 1) { // 一塁にいる
           b[2] = 1; // 三塁に進塁する
            b[0] = 0; // 一塁を抜く
        }
        b[1] = 1; // 二塁に進塁する
    }
    if(a[i] == 3){ // 三塁打
        if(b[2] == 1) { 
          point++; 
          b[2] = 0;
        }
        if(b[1] == 1){
          point++;
          b[1] = 0;
        }
        if(b[0] == 1) {
           point++; 
           b[0] = 0;
        }
        b[2] = 1;
    }
    if(a[i] == 4){
        if(b[2] == 1) {
           point++; 
           b[2] = 0;
        }
        if(b[1] == 1){
          point++;
          b[1] = 0;
        }
        if(b[0] == 1) {
           point++; 
           b[0] = 0;
        }
        point++;
    }
 }


 cout<< point << endl;

  return 0;
};
