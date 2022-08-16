#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

string board[110];
bool   goodX[110];
bool   goodY[110];

int main() {
    int X, Y;
    cin >> X >> Y;

    for (int i = 0; i < Y; i++) {
        cin >> board[i];
    }

    for (int i = 0; i < Y; i++) {
        for (int j = 0; j < X; j++) {
            if (board[i][j] == '#') {
                goodX[j] = true;
                goodY[i] = true;
            }
        }
    }

    for (int i = 0; i < X; i++) {
        if (goodX[i]) {
            for (int j = 0; j < Y; j++) {
                if (goodY[j]) {
                    cout << board[i][j] << endl;
                    return 0;
                }
            }
        }
    }

    return 0;
};
