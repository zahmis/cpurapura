#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> A(5);
    for (int i = 0; i < 5; i++) {
        cin >> A.at(i);
    }

    // i< 5 の場合 RE が起きる
    for (int i = 0; i < 4; i++) {
        if (A.at(i) == A.at(i + 1)) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
};

// vector<vector<int>> data (5, vector<int> (5,0))
