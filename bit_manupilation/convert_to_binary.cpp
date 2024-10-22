#include <bits/stdc++.h>
using namespace std;

void convert2Binary(int n) {
  string res = "";
  while (n != 1) {
    if (n % 2 == 1)
      res += '1';
    else
      res += '0';
    n = n / 2;
  }
  for (int i = res.size(); i >= 0; i--) {
    cout << res[i];
  }
  cout << endl;
}

int main() {
  int n = 7;
  convert2Binary(7);

  return 0;
}
