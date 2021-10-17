#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> points(3);

  for (int i = 0; i < 3; i++) {
    cin >> points[i];
  }

  //   const int maxHeight = max(max(points[0], points[1]), points[2]);
  //   const int minHeight = min(min(points[0], points[1]), points[2]);

  const int getMax = *max_element(points.begin(), points.end());
  const int getMin = *min_element(points.begin(), points.end());

  cout << getMax - getMin << endl;
};
