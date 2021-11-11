#include <bits/stdc++.h>
using namespace std;

// 再起動作
// (y, x)から到達できるすべての陸地マスのcheckedをtrueにする
void fill_island(vector<vector<char>> &board, vector<vector<bool>> &checked,
                 int y, int x) {
  if (y < 0 || x < 0 || y >= 10 || x >= 10)
    return;  // マス以上の場所は検索しなくて良い
  if (board.at(y).at(x) == 'x') return;  // 海だった場合も抜けて良い
  if (checked.at(y).at(x)) return;  // すでに陸だった場合も抜けて良い

  checked.at(y).at(x) = true;  // 既に調べているという状態に変えておく

  // そのマスから上下左右を調べる
  fill_island(board, checked, y - 1, x);  // 上
  fill_island(board, checked, y, x + 1);  // 右
  fill_island(board, checked, y + 1, x);  // 下
  fill_island(board, checked, y, x - 1);  // 左
}

bool check_connected(vector<vector<char>> &board) {
  vector<vector<bool>> checked(10, vector<bool>(10, false));

  // 任意の陸地ますを探す
  int y, x;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (board.at(i).at(j) == 'o') {
        y = i;
        x = j;
        break;  // あったので抜ける
      }
    }
  }
  // 再起関数 島が繋がっているか？
  /* 引数： 盤面, チェック二次元配列, y座標, x座標*/
  fill_island(board, checked, y,
              x);  // (y, x)から到達できるすべての陸地マスのcheckedをtrueにする

  bool ok = true;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      // ボードと実際の乖離をチェックする
      if (board.at(i).at(j) == 'o') {  // ボードでは陸
        if (!checked.at(i).at(j)) {  // チェックできていないということは離島
          // 到達できていない陸地マスがある
          ok = false;
        }
      }
    }
  }

  // ok == true なら全ての陸地マスは繋がっている
  return ok;
}

int main() {
  vector<vector<char>> board(10, vector<char>(10));
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      cin >> board.at(i).at(j);
    }
  }

  for (int y = 0; y < 10; y++) {
    for (int x = 0; x < 10; x++) {
      if (board.at(y).at(x) == 'o') continue;
      // (y, x)は海のマス
      // ここを埋め立てたと仮定して、島が1つになるかを判定

      board.at(y).at(x) = 'o';  // 埋め立てたと仮定する

      if (check_connected(board)) {
        cout << "YES" << endl;
        return 0;
      }

      board.at(y).at(x) = 'x';  // 戻す
    }
  }

  cout << "NO" << endl;
}

// 二次元配列に入力を入れておく
// 二次元配列の各マスに対して、埋め立てたと仮定して島が一つになるかを検証
// check_connected 関数を切り分ける
// true なら yes
