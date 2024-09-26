#include <bits/stdc++.h>
using namespace std;

void inside(int n, string &s) {
  s.push_back('(');
  if (n == 1) {
    s.push_back(')');
    return;
  }
  inside(n - 1, s);
  s.push_back(')');
  return;
}

void outside(int n, string &s) {
  s.push_back('(');
  if (n == 1) {
    s.push_back(')');
    return;
  }
  s.push_back(')');
  outside(n - 1, s);
  return;
}

void megatest(vector<string> &answer, int &n) {
  int i = 0;
  int j = n;
  while (i != n && j != 0) {
    string a;
    string b;
    string c;
    inside(j, a);
    outside(i, b);
    c = a + b;
    i++;
    j--;
    answer.push_back(c);
  }
}

int main() {
  vector<string> answer;
  int n = 3;
  megatest(answer, n);
  for (auto i : answer) {
    cout << i << endl;
  }
  return 0;
}
