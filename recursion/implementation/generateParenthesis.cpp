#include <bits/stdc++.h>
using namespace std;

void outside(int n, string &s) {
  s.push_back('(');
  if (n == 1) {
    s.push_back(')');
    return;
  }
  s.push_back(')');
  outside(n - 1, s);
}

void inside(int n, string &s) {
  s.push_back('(');
  if (n == 1) {
    s.push_back(')');
    return;
  }
  outside(n - 1, s);
  s.push_back(')');
}

void generateAnswer(int n, vector<string> &answer) {
  string s = "";
  if (n == 1) {
    outside(1, s);
    answer.push_back(s);
    return;
  }
  s = "";
  s.push_back('(');
}

vector<string> generateP(int n) {
  vector<string> answer;
  generateAnswer(n, answer);
  return answer;
}
int main() {
  int n = 3;
  vector<string> answer = generateP(n);
  for (int i = 0; i < answer.size(); i++) {
    cout << answer[i] << endl;
  }
  return 0;
}
