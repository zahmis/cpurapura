#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<int> > grid(15, vector<int>(15));

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            if (i == 0 || i == 14 || j == 0 || j == 14 || (i == 2 || i == 12) && j != 1 && j != 13 ||
                (i == 3 || i == 11) && (j == 2 || j == 12) ||
                (i == 4 || i == 10) && j != 1 && j != 3 && j != 13 && j != 11 ||
                (i == 5 || i == 9) && (j == 2 || j == 4 || j == 10 || j == 12 || j == 14) ||
                (i == 6 || i == 8) && j != 1 && j != 3 && j != 5 && j != 13 && j != 11 && j != 9 ||
                i == 7 && (j == 2 || j == 4 || j == 6 || j == 8 || j == 10 || j == 12 || j == 14)) {
                grid[i][j] = 1;    // black
            } else {
                grid[i][j] = 0;    // white
            }
        }
    }

    if (grid[r - 1][c - 1] == 1) {
        cout << "black" << endl;
    } else {
        cout << "white" << endl;
    }

    return 0;
};
