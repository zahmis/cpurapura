#include <bits/stdc++.h>
using namespace std;

// eg.
// 6
// G W Y P Y W
// => Four

// cin で入ってくるものに対して for or while で繰り返し処理を行うのだろうか？
// 配列に入れておいて、それを回す？
// 全て回した結果、 Y つまり黄色が入っているかどうかで three なのか four なのかを判別すれば良いと思っている
// cin を for で回すとええらしい

int main(){
    int N;
    string S;
    cin >> N;

    for (int i=0; i<N; i++)
    {
        cin>>S;
        if(S == "Y"){
            cout << "Four"<< endl;
            return 0;
        }
    }
    cout << "Three" << endl;
    return 0;
}
