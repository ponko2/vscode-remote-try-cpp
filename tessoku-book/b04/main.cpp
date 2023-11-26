#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;

  int size = N.size();
  int answer = 0;
  for (int i = 0; i < size; i++) {
    if (N.at(i) == '1') {
      answer += 1 << (size - i - 1);
    }
  }

  cout << answer << endl;
}
