#include <cstdio>

#define BUFSIZE (1 << 20)

static char buf[BUFSIZE];
static size_t idx = 0, size_buf = 0;

inline int read_char() {
  if (idx >= size_buf) {
    size_buf = fread(buf, 1, BUFSIZE, stdin);
    idx = 0;
    if (size_buf == 0)
      return EOF;
  }
  return buf[idx++];
}

inline long long read_ll() {
  long long x = 0;
  int c;

  c = read_char();
  while (c <= ' ') {
    c = read_char();
  }

  while (c >= '0' && c <= '9') {
    x = x * 10 + (c - '0');
    c = read_char();
  }

  return x;
}

int main() {
  long long n = read_ll();
  long long s = read_ll();

  static long long arr[1000000];

  for (long long idx = 0; idx < n; idx++) {
    arr[idx] = read_ll();
  }

  long long i = 0, j = n - 1;

  while (i < j) {
    long long sum = arr[i] + arr[j];

    if (sum == s) {
      printf("%lld %lld\n", i + 1, j + 1);
      return 0;
    } else if (sum < s) {
      i++;
    } else {
      j--;
    }
  }

  printf("-1\n");
  return 0;
}