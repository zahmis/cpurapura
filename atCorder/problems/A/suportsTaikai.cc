#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;
    int judgeTaikai = y % 4;

    // 開催年 2022
    if (judgeTaikai == 2)
    {
        cout << y << endl;
        return 0;
    }

    // 2024 あと2年後
    if (judgeTaikai == 0)
    {
        cout << y + 2 << endl;
        return 0;
    }

    cout << y + judgeTaikai << endl;

    // // 2023  あと3年後
    // if (judgeTaikai == 3)
    // {
    //     cout << y + 3 << endl;
    //     return 0;
    // }
    // // 2025 あと1年後
    // if (judgeTaikai == 1)
    // {
    //     cout << y + 1 << endl;
    //     return 0;
    // }

    return 0;
};
