#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<string>> data(H, vector<string>(W, 0));

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> data.at(i).at(j);
        }
    }

    for (int i = 0; i < H; i++) {
        bool flag = true;
        for (int j = 0; j < W; j++) {
            if (data.at(i).at(j) == '#') {
                flag = false;
                break;
            }
        }
        if (flag) {
        }
    }

    return 0;
};
// 配列を消すには？
// 縦の列を消すには？
