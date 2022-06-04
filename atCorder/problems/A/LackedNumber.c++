#include <iostream>
using namespace std;
 
int main(){
  string s;
    cin >> s;
    for(int i = 0; i< 10; i++){
        string x = to_string(i);
        // npos はみつからかったときのこと
        if(s.find(x) == string::npos){
            cout << x << endl;
        }
    }
    // const int = 1+2+3+4+5+6+7+8+9;
    return 0;
  };
