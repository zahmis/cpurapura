#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    const int NMMAX = 50;
    // 50 までの配列を用意する
    int A[NMMAX], B[NMMAX];

    // 別々に用意する
    for (int i = 0; i < M; i++) {
        cin >> A[i] >> B[i];
    }

    int road[NMMAX];
    // 初期化
    for (int i = 0; i < M; i++) {
        road[i] = 0;
    }

    for (int i = 0; i < M; i++) {
        // A[0] は 1 となる
        // これは road[1] になってしまう
        road[A[i] - 1] += 1;
        road[B[i] - 1] += 1;
    }

    for (int i = 0; i < N; i++) {
        cout << road[i] << endl;
    }

    return 0;
};
