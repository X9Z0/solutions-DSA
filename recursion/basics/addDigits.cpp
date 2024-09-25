#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  void addIt(int &num, int &sum) {
    if (num == 0) {
      return;
    }
    sum += num % 10;
    num /= 10;
    addIt(num, sum);
  }

public:
  int addDigits(int num) {
    if (num < 10) {
      return num;
    }
    int sum = 0;
    addIt(num, sum);
    return addDigits(sum);
  }
};
