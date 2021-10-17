#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int okane;
  cin >> okane;
  cout << ((okane % 100 || okane == 0) ? "No" : "Yes") << endl;
};
