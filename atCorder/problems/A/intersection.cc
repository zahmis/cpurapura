#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if (l1 > l2) {
        swap(l1, l2);
        swap(r1, r2);
    }

    if (l2 >= r1) {
        cout << 0 << endl;
        return 0;
    }

    if (r2 >= r1) {
        cout << r1 - l2 << endl;
        return 0;
    }

    cout << r2 - l2 << endl;
    return 0;
};
