#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

// int warizan(int hikisuu) {
//   int count = 0;
//   if (hikisuu % 2 != 0) {
//     return count;
//   }
//   hikisuu = hikisuu / 2;
//   count = count + 1;
//   warizan(hikisuu);
// }

// int main() {
//   int N;       // 3
//   int A[210];  // (16, 12, 24)
//   cin >> N;
//   for (int i = 0; i < N; i++) {
//     cin >> A[i];
//   }

//   for (int i = 0; i < N; i++) {
//     cout << warizan(A[i]) << endl;
//   }
// };

int main() {
  cin >> N;
  for (int i = 0; i < N; i++) {
    int response = 0;
    while (true) {
      bool isOdd = false;
      for (int i = 0; i < N; i++) {
        if (A[i] % 2 != 0) isOdd = true
      }
    }
    if (isOdd) break for (int i = 0; i < N; ++i) {
        A[i] /= 2;
      }
    ++response;
  }
}
