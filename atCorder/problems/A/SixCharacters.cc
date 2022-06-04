#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

　　// s.size() でも良い
    const int length = s.length();
    

    if(length == 1){
        cout << s + s + s + s + s + s << endl;
    }else if(length == 2){
        cout << s + s + s << endl;
    }
    else {
        cout << s + s << endl;
    }

    return 0;
}
