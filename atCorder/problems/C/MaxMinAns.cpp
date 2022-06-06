#include <bits/stdc++.h>
using namespace std;

int main() {
  // ex. 8
  int q;
  cin >> q;
  // 弱順序 小 -> 大
  multiset<int> st;
  while (q--) {
    int t;
    cin >> t;
    if (t == 1) {
      int x;
      cin >> x;
      st.insert(x);
    } else if (t == 2) {
      // x は削除対象数, cは定数
      int x, c;
      cin >> x >> c;

      // c回探す && 対象数と末尾が異なる -> 削除
      while (c-- and st.find(x) != st.end()) {
        st.erase(st.find(x));
      }
    } else {
      // rbegin() は末尾を指す -> 最大値
      cout << *st.rbegin() - *st.begin() << endl;
    }
  }
}
// multiset について
