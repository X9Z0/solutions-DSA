#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  void generate(int n, vector<string> &answer, string &s) {
    if (n == 1) {
      s = "";
      s.push_back('(');
    }
    s.push_back('(');
  }

public:
  vector<string> generateParenthesis(int n) {
    vector<string> answer;
    string s;
    generate(n, answer, s);
    return answer;
  }
};
