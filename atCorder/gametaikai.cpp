#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N, M;
  // vecror<int> A(N);
  vector<vector<int> > data(N, vector<int>(N));  // N x M 要素の二次元配列

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> data[i][j];
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (data[i][0]) {
        cout << "o";
      } else if (data[0][j]) {
        cout << "x";
      } else {
        cout << "-"
      };
    }
  };
