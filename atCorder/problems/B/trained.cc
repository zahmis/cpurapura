#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    //ボタンは考えなくてもいいかも
    // int Button[N];
    // for (int i = 1; i < N + 1; i++) {
    //     Button[i] = i;
    // }

    int Order[N];
    for (int i = 0; i < N; i++) {
        int z;
        cin >> z;
        z--;             // 1 減らしている
        Order[i] = z;    // 1 減らしている
    }

    int now   = 0;
    int count = 0;

    // 無限回実行するか　N 以上実行するか
    for (int i = 0; i < N + 1; i++) {
        if (now == 1) {
            cout << count << endl;
            cout << "2に入る" << endl;
            return 0;
        }
        if (count >= N) {
            cout << -1 << endl;
            cout << "count >= N" << endl;
            return 0;
        }
        count++;
        now = Order[now];
    }

    return 0;
};
