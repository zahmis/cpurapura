//問題文

// 縦 H 行、横 W 列のマス目があります。 上から i 行目、左から j 列目のマスを
// (i,j) と表します。 各マスは白または黒です。
//マス目の配色は、H 行 W 列の行列 (i,j) によって与えられます。 i,j が .
//ならばマス (i,j) は白であり、i,j が # ならばマス (i,j) は黒です。

// すぬけ君はこのマス目を圧縮しようとしています。
// そのために、白いマスのみからなる行または列が存在する間、次の操作を繰り返し行います。

// 操作:
// 白いマスのみからなる行または列をひとつ任意に選び、その行または列を取り除いて空白を詰める。
// 各操作でどの行または列を選ぶかによらず、最終的なマス目は一意に定まることが示せます。
// 最終的なマス目を求めてください。

// 制約
// 1≤H,W≤100
// i,j は . または # である。
// マス目全体で少なくともひとつは黒いマスが存在する。

//入力例
// 4 4
// ##.#
// ....
// ##.#
// .#.#

#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  //   int N, M;  // 縦 横
  //   cin >> N >> M;
  // 二次元配列で格納した後、 ドットのみからなる行を削除しようと思った
  // しかし、入力が連続していたらその行を削除したら良いのでは？とも思う
  // 公式の回答は
  // まず，黒いマスが含まれる行および列をマークします．
  // その後，マークされた行とマークされた列が交差する位置の
  // i,jのみを出力すればよいです．

  //   vector<vector<char> > data(N, vector<char>(N, '-'));
  //   for (int i = 0; i < N - 1; i++) {
  //     for (int j = 0; j < M - 1; i++) {
  //       cin >> data[i][j];
  //     }

  //   int main() {
  int h;  // 縦 h 行
  cin >> h;
  int w;  // 横 w 列
  cin >> w;
  vector<string> a(h);
  for (int i = 0; i < h; i++) {
    cin >> a[i];  // line の全て入れるのか
  }
  // 入力は
  // 4 4
  // ##.#　[i,j] = [0,0][0,1][0,3]
  // ....
  // ##.#  [2,0][2,1][2,3]
  // .#.#  [3,1][3,3]
  //   cout << "hgoe";
  //   cout << a[0] << endl; // ##.#
  // 配列だから a[0][0] だったら一番最初を取得する

  vector<bool> row(h, false);
  // row という配列は [false, false, false, false]
  vector<bool> col(w, false);
  // col [false, false, false, false]
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (a[i][j] == '#') {
        row[i] = true;  // [0,2,3] 行に対して一つでも # があれば true
        col[j] = true;  // [0,1,2,3] 同じく 列に対して　つまり. のみを燻り出す
      }
    }
  }

  for (int i = 0; i < h; i++) {
    if (row[i]) {  //まず列を見て # を見つける [true, false, true, true]
                   // 2行目だけ false なのでその行を除去できる
      for (int j = 0; j < w; j++) {
        if (col[j]) {  // 行を見て # を見つける [true, true, false, true]
                       // 3行目だけ false
          cout << a[i][j];
        }
      }
      cout << endl;
    }
  }
};
