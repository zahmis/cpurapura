#define _GLIBCXX_DEBUG

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> points(N);

  int total = 0;
  for (int i = 0; i < N; i++) {
    cin >> points[i];
    total = total + points[i];
  }

  int average = total / N;

  for (int i = 0; i < N; i++) {
    cout << abs(average - points[i]) << endl;
  }
}
