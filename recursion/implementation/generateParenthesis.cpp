#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  void generateAns(int open, int close, int n, string s,
                   vector<string> &answer) {
    if (open == close && (open + close) == 2 * n) {
      answer.push_back(s);
      return;
    }
    if (open < n) {
      generateAns(open + 1, close, n, s + "(", answer);
    }
    if (close < open) {
      generateAns(open, close + 1, n, s + ")", answer);
    }
  }

public:
  vector<string> generateParenthesis(int n) {
    vector<string> answer;
    int open = 0;
    int close = 0;
    generateAns(open, close, n, "", answer);
    return answer;
  }
};
