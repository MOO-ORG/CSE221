#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  int M;
  cin >> M;
  vector<int> B(M);
  for (int i = 0; i < M; i++) {
    cin >> B[i];
  }

  int i = 0, j = 0;

  while (i < N && j < M) {
    if (A[i] <= B[j]) {
      cout << A[i] << " ";
      i++;
    } else {
      cout << B[j] << " ";
      j++;
    }
  }

  while (i < N) {
    cout << A[i] << " ";
    i++;
  }

  while (j < M) {
    cout << B[j] << " ";
    j++;
  }

  return 0;
}