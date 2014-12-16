#include <iostream>

using namespace std;

int find_digits(int n) {
  int divisor, remainder = n, digits = 0;
  do {
    divisor = remainder % 10;
    if (divisor != 0 && (n % divisor == 0)) digits += 1;
    remainder /= 10;
  } while(remainder != 0);
  return digits;
}

int main(int argc, char *argv[]) {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    cout << find_digits(n) << endl;
  }
  return 0;
}