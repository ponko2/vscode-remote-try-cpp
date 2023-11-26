#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  vector<int> L(Q), R(Q);
  for (int i = 0; i < Q; i++) {
    cin >> L.at(i) >> R.at(i);
  }

  vector<int> S(N + 1);
  S.at(0) = 0;
  for (int i = 0; i < N; i++) {
    S.at(i + 1) = S.at(i) + A.at(i);
  }

  for (int i = 0; i < Q; i++) {
    cout << S.at(R.at(i)) - S.at(L.at(i) - 1) << endl;
  }
}
