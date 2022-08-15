#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end(), greater<int>());

    int countA = 0;
    int countB = 0;

    for (int i = 0; i < N; i++) {
        if (i == 0 || i % 2 == 0) {
            countA += A[i];
        } else {
            countB += A[i];
        }
    }

    int diff = abs(countA - countB);
    cout << diff << endl;

    return 0;
};
