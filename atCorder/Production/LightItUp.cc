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

  // n 行 2 列の行列を作る
  vector<vector<int>> data(n, vector<int>(2));
  for (int i = 0; i < n; i++) {
    cin >> data.at(i).at(0) >> data.at(i).at(1);
  }

  int distance = 100000000;
  vector<long long> sanbun(2n - 2);

  // 行燈持っているやつの座標
  for (int i = 0; i < k; i++) {
    // あんどん持っているやつの x 座標
    int disX = data.at(a[i] - 1).at(0);
    int disY = data.at(a[i] - 1).at(1);

    for (int j = 0; j < n; j++) {
      if (data.at(a[i] - 1).at(0) == data.at(j).at(0) &&
          data.at(a[i] - 1).at(1) == data.at(j).at(1)) {
        continue;
      }
      sabun[j] = sqrt(pow(disX - data.at(j).at(0), 2) +
                      pow(disY - data.at(j).at(1), 2));
    }
  }

  cout << max_element(sabun.begin(), sabun.end()) << endl;

  return 0;
};
