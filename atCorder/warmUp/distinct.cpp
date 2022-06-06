#define _GLIBCXX_DEBUG 0
#include <bits/stdc++.h>
using namespace std;

// int main() {
//   int N;
//   cin >> N;

//   vector<int> A(2 * N);
//   for (int i = 0; i < 2 * (N - 1); i++) {
//     cin >> A.at(i);
//   }

//   map<int, int> cnt;
//   for (int x : A) {
//     if (cnt.count(x)) {
//       // 既に含まれているならインクリメント
//       cnt.at(x)++;
//     } else {
//       // 含まれていないなら、1を追加
//       cnt.at(x) = 1;
//     }
//   }

//   int max_cnt = 0;  // 出現回数の最大値を保持
//   int ans = -1;     // 出現回数が最大になる値を保持
//   for (int x : A) {
//     // 今見ているxの出現回数が、その時点の最大よりも大きければ更新
//     if (max_cnt < cnt.at(x)) {
//       max_cnt = cnt.at(x);
//       ans = x;
//     }
//   }

//   if (N - 1 == ans)
//     cout << "Yes" << endl;
//   else
//     cout << "No" << endl;
// };

// 5
// 1 4
// 2 4
// 3 4
// 4 5

typedef long long ll;
signed main() {
  ll n;
  cin >> n;                // 5
  vector<ll> count(n + 1); //各頂点の次数を数える count 配列 6 ?

  for (ll i = 1; i <= n - 1; i++) {
    ll a, b;
    cin >> a >> b; // 1 4
    count[a]++; // count[a] = count[a] + 1 これは count[1] に値を入れている
    count[b]++; // count[b] = count[b] +　1
                // これによってどちらにきてもカウントできる
  }

  for (ll i = 1; i <= n; i++) {
    if (count[i] == n - 1) { // カウント配列を最初からチェックしていく
      cout << "Yes" << endl;
      return 0; //プログラムを終了する
    }
  }
  cout << "No" << endl;

  return 0;
}
