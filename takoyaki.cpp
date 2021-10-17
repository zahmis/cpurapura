#include <bits/stdc++.h>
using namespace std;
// input ex.1
// 1
// price
// N

// input ex.2
// 2
// text
// price
// N

int main() {
  int p;
  cin >> p;

  int price;
  // パターン1
  if (p == 1) {
    cin >> price;
  }

  string text;
  // パターン2
  if (p == 2) {
    cin >> text;
    cin >> price;
  }

  int N;
  cin >> N;

  if (p == 2) {
    cout << text << "!" << endl;
  }
  cout << price * N << endl;
}
