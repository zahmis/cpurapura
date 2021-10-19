#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<double> A(N), B(N);  // A(N) 長さの配列, B(N) 早さの配列

  for (int i = 0; i < N; i++) {
    cin >> A[i] >> B[i];
  }

  double t = 0, ans = 0;
  for (int i = 0; i < N; i++) {
    t = t + A[i] / B[i];
  };
  t = t / 2;  // 総合時間を 2 でわって片道の時間計算
  for (int i = 0; i < N; i++) {
    //本来の長さ or 時間経過した長さ どちらか小さい方を返す
    ans = ans + min(A[i], t * B[i]);
    // 全体の時間から、かかった時間 or t を引く。
    // t は i番目における最大時間になっている　いやウソ 単純に
    // 一本の場合をカウントしている
    t = t - min(A[i] / B[i], t);
  };

  // 浮動小数店の桁数を指定する
  cout << fixed << setprecision(15) << ans << endl;

  // int totalLength;
  // for (int i = 0; i < N; i++) {
  //   totalLength = totalLength + A[i];
  // }

  // float averageFireSpeed;
  // int totalSpeed;
  // for (int i = 0; i < N; i++) {
  //   totalSpeed = totalLength + B[i];
  // }
  // averageFireSpeed = totalSpeed / N;

  // float time = totalLength / averageFireSpeed;

  // float gettingTime = 0;
  // float explictTime;
  // float gettingLength;
  // for (int i = 0; i < N; i++) {
  //   gettingTime = gettingTime + A[i] / B[i];  // 0.333 => 1.3333 => 4.3333
  //   if (gettingTime > time / 2) {
  //     explictTime = gettingTime - time / 2;
  //     gettingLength = gettingLength + explictTime * B[i];
  //     cout << gettingLength << endl;
  //     return 0;
  //   }
  //   gettingLength = gettingLength + A[i];
  // }
};
