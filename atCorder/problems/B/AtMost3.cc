#include <iomanip>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <vector>
using namespace std;

int main(void) {
  int n, w;
  cin >> n >> w;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<bool> goodCount(w + 1);

  for (int i = 0; i < n; i++) {
    if (a[i] <= w)
      goodCount[a[i]] = true;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      int sum = a[i] + a[j];
      if (sum <= w)
        goodCount[sum] = true;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      for (int k = 0; k < j; k++) {
        int sum = a[i] + a[j] + a[k];
        if (sum <= w)
          goodCount[sum] = true;
      }
    }
  }

  int ans = 0;
  for (int i = 1; i <= w; i++) {
    if (goodCount[i])
      ans++;
  }

  cout << ans << endl;

  return 0;
}
