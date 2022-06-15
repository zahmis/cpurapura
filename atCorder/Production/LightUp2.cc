#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  // 行燈持っているやつのいち
  vector<int> a(k);
  for (int i = 0; i < k; i++) {
    cin >> a[i];
  }

  vector<long long> x(n), y(n);

  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }

  long long distance = 0;

  for (int i = 0; i < k; i++) {
    long long lightX = x[a[i] - 1];
    long long lightY = y[a[i] - 1];
    for (int j = 0; j < n; j++) {
      if (lightX == x[j] && lightY == y[j]) {
        continue;
      }
      long long sabun = sqrt(pow(lightX - x[j], 2) + pow(lightY - y[j], 2));
      distance = max(distance, sabun);
    }
  }

  cout << setprecision(12) << distance << endl;

  return 0;
};
