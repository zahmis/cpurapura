#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, r;
    cin >> l >> r;

    const string s = "atcoder";

    for (int i = l - 1; i < r; i++) {
        cout << s[i];
    }

    return 0;
};
