#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, K;
  cin >> N >> K;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  unordered_map<int, int> freq;
  int left = 0;
  int answer = 0;

  for (int right = 0; right < N; right++) {
    freq[A[right]]++;

    while ((int)freq.size() > K) {
      freq[A[left]]--;
      if (freq[A[left]] == 0) {
        freq.erase(A[left]);
      }
      left++;
    }

    answer = max(answer, right - left + 1);
  }

  cout << answer << "\n";
  return 0;
}