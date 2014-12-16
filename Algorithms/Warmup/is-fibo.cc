#include <iostream>
#include <algorithm>
#define FIBONACCI_MAX 50

using namespace std;

long long fib[FIBONACCI_MAX] = {};

void init_fibo() {
  fib[0] = 0;
  fib[1] = 1;
  for(int i = 2; i < FIBONACCI_MAX; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
  }
}

bool is_fibo(long long n) {
  return binary_search(fib, fib + FIBONACCI_MAX, n);
}

int main(int argc, char *argv[]) {
  int t;
  cin >> t;
  init_fibo();
  for (int i = 0; i < t; i++) {
    long long n;
    cin >> n;
    if (is_fibo(n))
      cout << "IsFibo" << endl;
    else
      cout << "IsNotFibo" << endl;
  }
  return 0;
}