#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  void reverseS(int &i, int &j, vector<char> &s) {
    if (i >= j) {
      return;
    }
    swap(s[i], s[j]);
    i++;
    j--;
    reverseS(i, j, s);
  }

public:
  vector<char> reverseString(vector<char> &s) {
    int i = 0;
    int j = s.size() - 1;
    reverseS(i, j, s);
    return s;
  }
};
