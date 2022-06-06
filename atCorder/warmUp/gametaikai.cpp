#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M; // N人参加　M回し合いが行われる
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A[i] >> B[i];
  }

  vector<vector<char>> data(
      N, vector<char>(N, '-')); // N x N 要素の二次元配列 初期化

  for (int i = 0; i < M; i++) {
    A[i]--;
    B[i]--;
    data[A[i]][B[i]] = 'o';
    data[B[i]][A[i]] = 'x';
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << data[i][j];
      if (j == N - 1) {
        cout << endl;
      } else {
        cout << " ";
      };
    }
  }
}
