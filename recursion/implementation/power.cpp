#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  double myPow(double x, int n) {
    if (n == -1) {
      return static_cast<float>(1 / x);
    }
    if (n == 0) {
      return 1;
    }
    if (n == 1) {
      return x;
    }
    if (n < 0) {
      return static_cast<float>(1 / x) * myPow(x, n + 1);
    }
    return x * myPow(x, n - 1);
  }
};
