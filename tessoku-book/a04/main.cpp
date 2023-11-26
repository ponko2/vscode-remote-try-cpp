#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  for (int i = 9; i >= 0; i--) {
    int v = 1 << i;
    cout << (N / v) % 2;
  }

  cout << endl;
}
