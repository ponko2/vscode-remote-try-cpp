#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  int answer = 0;
  for (int x = 1; x <= N; x++) {
    for (int y = 1; y <= N; y++) {
      int z = (K - x - y);
      if (z >= 1 && z <= N) {
        answer++;
      }
    }
  }

  cout << answer << endl;
}
