
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() { int n; 
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<bool> b(4);
    int point = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 3; j>=0; j--){
            if(b[j]){
                b[j] = false;
                if(j+a[i]<4){
                    b[j+a[i]] = true;
                }else {
                    point++;
                }
            }
        }
    }
    cout << point << endl;

    return 0;
}
