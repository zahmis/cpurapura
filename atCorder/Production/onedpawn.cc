#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
 
//  n k q
//  a1... ak
//  l1... ak

int main(){
  int n,k,q;
    cin >> n >> k >> q; // 5 3 5
  
  int pawn[k];
  for (int i = 0; i < k; i++)
  {
    cin >> pawn[i];
  }
  bool pawnPos [n];
  for (int i = 0; i < k; i++)
  {
    pawnPos[pawn[i]] = true;
  }

  

  int targetPown[q]; // [3 3 1 1 2]
  for (int i = 0; i < q; i++)
  {
    cin >> targetPown[i];
  }

  for (int i = 0; i < q; i++){
    if(targetPown[i] == q) continue;
    if(pawn[targetPown[i] + 1]) continue;
    
  }
  
  



  
return 0;
};
