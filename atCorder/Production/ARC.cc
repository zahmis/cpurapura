#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, C;
  int a, b, c, d;
  cin >> r >> C >> a >> b >> c >> d;
  if (r == 1 && C == 1) {
    cout << a << endl;
    return 0;
  }
  if (r == 1 && C == 2) {
    cout << b << endl;
    return 0;
  }
  if (r == 2 && C == 1) {
    cout << c << endl;
    return 0;
  }
  if (r == 2 && C == 2) {
    cout << d << endl;
    return 0;
  }

  return 0;
};
