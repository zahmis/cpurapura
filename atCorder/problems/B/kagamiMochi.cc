#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;

    vector<int> d(N);
    for (int i = 0; i < N; i++) {
        cin >> d[i];
    }
    sort(d.begin(), d.end(), greater<int>());

    d.erase(unique(d.begin(), d.end()), d.end());

    cout << d.size() << endl;

    return 0;
};

// set を使っても可能
