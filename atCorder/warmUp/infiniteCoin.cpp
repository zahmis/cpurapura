#include <bits/stdc++.h>
using namespace std;

// 500 円玉で割り、あまりを考える。
// A が余りより多ければyes

int main() {
  int N;
  int A;
  cin >> N; // 2018 などの総額
  cin >> A; // 218 一円玉の枚数

  int amari = N % 500;
  if (amari <= A) {
    cout << "Yes" << endl;
  } else if (amari == N && A > N) {
    cout << "No" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
