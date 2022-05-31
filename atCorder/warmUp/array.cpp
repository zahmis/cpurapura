#define _GLIBCXX_DEBUG

#include <bits/stdc++.h>
using namespace std;

// int main() {
//   // 3個の入力を受け取れるように 3要素の配列 {0, 0, 0} で初期化
//   vector<int> vec(3); // vector<int> vec = {0,0,0} と同じ

//   // atを使って1つずつ入力
//   cin >> vec.at(0) >> vec.at(1) >> vec.at(2);

//   // 和を出力
//   cout << vec.at(0) + vec.at(1) + vec.at(2) << endl;
// }

int main() {
  int N;
  cin >> N;
  vector<int> math(N);
  vector<int> en(N);

  for (int i = 0; i < N; i++) {
    cin >> math[i];
  }

  for (int i = 0; i < N; i++) {
    cin >> en[i];
  }

  for (int i = 0; i < N; i++) {
    cout << math[i] + en[i] << endl;
  }

  return 0;
}
