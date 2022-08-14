#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;
    // if 分で分岐
    // while で判別
    // sort する

    sort(s.begin(), s.end());

    if (s[0] != s[1])
        cout << s[0] << endl;
    else if (s[1] != s[2])
        cout << s[1] << endl;
    else
        cout << s[2] << endl;

    return 0;
};
