#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  // s を見つける 二次元配列で
  int H, W;
  cin >> H, W;

  vector<vector<char> > board(H, vector<char>(W));

  void search(int x, int y) {
    if (x < 0 || W <= x || y < 0 || H <= y || borad[x][y] == '#') return;

    if (board[x][y]) return;
    if (board[x][y] == 'g') {
      cout << "Yes" << endl;
      return;
    }

    board[x][y] = true;
    search(x + 1, y);
    search(x - 1, y);
    search(x, y + 1);
    search(x, y + 1);
  }

  int x;
  int y;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < H; j++) {
      cin >> board[i][j];
      if (board == "s") {
        x = j;
        y = i;
        search(x, y)
      }
    }

    return 0;
  }

  // basecase
  // 上下左右を調べる # なら return . なら続行  g が見つかればyes

  // 再帰ステップ 引数 返り値 処理内容
};
