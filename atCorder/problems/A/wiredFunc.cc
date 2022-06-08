#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int wiredFunction(int x) { return x * x + 2 * x + 3; }

int main() {
  int t;
  cin >> t;
  cout << wiredFunction(wiredFunction((wiredFunction(t) + t)) +
                        wiredFunction(wiredFunction(t)))
       << endl;
  return 0;
};
