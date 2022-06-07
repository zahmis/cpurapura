#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[10];

  cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6] >> a[7] >> a[8] >>
      a[9];

  int first = a[a[0]];
  int second = a[first];
  cout << second << endl;

  return 0;
};
