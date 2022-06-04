#include <iostream>
using namespace std;

int calc(int a, int b, int c, int x){
    const int period = x/(a+c), rest = x%(a+c);
    const int time = period * a + min(rest, a);
    return time*b ;
}

int main(){
    int A,B,C,D,E,F,X;
    cin >> A >> B >> C >> D >> E >> F >> X;

    int Taka = calc(A,B,C,X);
    int Aoki = calc(D,E,F,X);

    if(Taka > Aoki) cout << "Takahashi" << endl;
    else if(Taka < Aoki) cout << "Aoki" << endl;
    else cout << "Draw" << endl;
}
