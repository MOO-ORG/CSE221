#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  long long K;
  cin >> N >> K;

  vector<long long> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }

  int left = 0;
  long long current_sum = 0;
  int max_length = 0;

  for (int right = 0; right < N; right++) {
    current_sum += a[right];

    while (current_sum > K) {
      current_sum -= a[left];
      left++;
    }

    int window_length = right - left + 1;
    max_length = max(max_length, window_length);
  }

  cout << max_length << endl;
  return 0;
}