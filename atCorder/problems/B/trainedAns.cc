#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;    // Order
    for (int i = 0; i < n; i++) {
        int z;
        cin >> z;
        z--;    // 1 減らしている　
        v.push_back(z);
    }

    int now = 0, count = 0;

    // 無限回実行
    for (;;) {
        if (now == 1) {    // 2 のボタンのとき
            cout << count << endl;
            break;
        }
        if (count >= n) {
            cout << -1 << endl;
            break;
        }
        count++;
        now = v[now];
    }
}
