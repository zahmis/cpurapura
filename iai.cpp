#include <bits/stdc++.h>
using namespace std;

int main() {
  char c;
  cin >> c;
  const string boin = "aiueo";
  cout << (boin.find(c) != string::npos ? "vowel" : "constant");

  return 0;
}
