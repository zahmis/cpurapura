#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  vector<int> A(N), B(N);

  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> A[i] >> B[i];
  }

  int totalLength;
  for (int i = 0; i < N; i++) {
    totalLength = totalLength + A[i];
  }

  float averageFireSpeed;
  int totalSpeed;
  for (int i = 0; i < N; i++) {
    totalSpeed = totalLength + B[i];
  }
  averageFireSpeed = totalSpeed / N;

  float time = totalLength / averageFireSpeed;

  float gettingTime = 0;
  float explictTime;
  float gettingLength;
  for (int i = 0; i < N; i++) {
    gettingTime = gettingTime + A[i] / B[i];  // 0.333 => 1.3333 => 4.3333
    if (gettingTime > time / 2) {
      explictTime = gettingTime - time / 2;
      gettingLength = gettingLength + explictTime * B[i];
      cout << gettingLength << endl;
      return 0;
    }
    gettingLength = gettingLength + A[i];
  }
};
