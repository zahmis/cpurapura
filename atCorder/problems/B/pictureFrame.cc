#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

// input
// 2 3
// abc
// arc

// output
// #####
// #abc#
// #arc#
// #####

int main() {

    // int H, W;
    // cin >> H >> W;

    // vector<string> kakoi(H);

    // // cin で取得してabcを多次元配列で表現する
    // // その周りをどうやって # で囲むか

    // for (int i = 0; i < H; i++) {
    //     for (int j = 0; j < W; j++) {
    //         cin >> kakoi[i][j];
    //     };
    // }

    // for (int i = 0; i < H; i++) {
    //     for (int j = 0; j < W; j++) {
    //         if (i == 0 || i == H - 1 || j == 0 || j == W - 1) {
    //             cout << "#";
    //         } else {
    //             cout << kakoi[i][j];
    //         }
    //     }
    //     cout << "#" << endl;
    // }

    // char 型の二次元配列はこれで表現可能
    char a[100][101], b[102][102];

    int H, W;
    cin >> H >> W;

    // abc
    // arc
    // array = {abc,arc,...}
    for (int i = 0; i < H; i++)
        cin >> a[i];

    // 上下左右に なので +2
    for (int i = 0; i < H + 2; i++)
        for (int j = 0; j < W + 2; j++)
            b[i][j] = '#';

    // 通常の部分をくり抜く　入力
    for (int i = 0; i < H; i++)
        for (int j = 0; j < W; j++)
            b[i + 1][j + 1] = a[i][j];

    // 出力
    for (int i = 0; i < H + 2; i++) {
        for (int j = 0; j < W + 2; j++)
            cout << b[i][j];
        cout << endl;
    }

    return 0;
};
