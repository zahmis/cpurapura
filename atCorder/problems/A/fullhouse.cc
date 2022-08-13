#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main(void){
    int cards[5];
    
    for(int i = 0; i < 5; i++){
        cin >> cards[i];
    }


    bool isTwo = false;
    bool isThree = false;

    for (int i = 0; i < 5; i++){
    
        int count = 0;
        
        // 1 2 1 2 1
        // １に対して 2 1 2 1 を比較カウント
        for (int j = 0; j < 5; j++){
            if(i == j) {continue;}
            if (cards[i] == cards[j]){
                count++;
            }

            // 4card 
            if(count == 3 ) { 
                cout  << "No" << endl;
                return 0;
            };

            // フルハウス
            if(isTwo== true && isThree == true ){
                cout << "Yes" << endl;
                return 0;
            }

            // 3 card
            if (count == 2){
                isThree = true;
            }

            // 1 ペア
            if (count == 1){
                isTwo = true;
                
                if(isThree == true){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;
}
