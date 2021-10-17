#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> targets(5);
  for (int i = 0; i < 5; i++) {
    cin >> targets[i];
  }
  bool ans = false;
  for (int i = 0; i < 4; i++) {
    if (targets[i] == targets[i + 1]) {
      ans = true;
    };
  }

  if (ans) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
};
