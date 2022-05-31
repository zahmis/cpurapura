# include <iostream>
// #include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(void){
    int H, W, i, j;
    cout << "入力してください " << endl;
    cin >> H >> W;

    vector<pair<int,int> > pieces;
    for(i=0; i<H;i++){
        for(j=0; j<W; j++){
            char c;
            cin >> c;
            if(c == 'o'){
                pieces.push_back(make_pair(i,j));
            }
        }
    }

    cout << "hoge" << endl;

    // 分割代入
    const auto& [a,b] = pieces[0];
    const auto& [c,d] = pieces[1];

    int distance = abs(a-c) + abs(b-d);

    cout << distance << "\n";
    return 0;
}
