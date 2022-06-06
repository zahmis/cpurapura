#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int A, B, C, X;
    cin >> A >> B >> C >> X;

    if (X <= A) {
        printf("%.12lf\n", 1.0);
    } else if (X <= B) {
        double ans = C;
        ans = ans / (B - A);
        printf("%.12lf\n", ans);
    } else
        printf("%.12lf\n", 0.0);

    return 0;
};
