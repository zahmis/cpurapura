#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main(void) {

  char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
  int n;
  cin >> n;
  const int alNumber = n - 97;
  cout << alphabet[alNumber] << endl;
  cout << (char)n << endl;

  return 0;
}
