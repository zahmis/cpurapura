#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

int main(void){
    int Q, x, c;

    cout << "入力してください" << endl;
    cin >> Q;

    vector<int> query;
    for(int i = 0; i < Q ; i++){
        int a;
        cin >> a;

        if(a == 1){
            cin >> x;
            query.push_back(x); // ここまで正解
        }else if(a == 2){
            cin >> x, c; //ok
      
            int countNum = count(query.begin(), query.end(), x);
            const int deleteCount = min(c, countNum);
            query.erase(remove(query.begin(), query.end(), x), query.end());
        }else {
            cin >> x, c;
            cout << max(query.begin(),query.end()) - min(query.begin(),query.end()) << endl;
        }
    }
    return 0;
}
