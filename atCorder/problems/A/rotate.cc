#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a = n / 100;
  int b = n / 10 % 10;
  int c = n % 10;

  cout << 100 * (a + b + c) + 10 * (a + b + c) + a + b + c << endl;

  return 0;
};
