#include <iostream>
#include <cmath>

using namespace std;

long long PowMod(long long a, long long b, long long n) {
  long long result = 1;
  a %= n;
  while (b)
  {
    if (b & 1) result = (result * a) % n;
    a = (a * a) % n;
    b >>= 1;
  }
  return result;
}

long long GetNumOfAntipalindromic(long long n, long long m) {
  static long long divisor = pow(10, 9) + 7;
  if (n == 1) return m;
  else if (n == 2) return (GetNumOfAntipalindromic(n - 1, m) * (m - 1)) % divisor;
  else
  {
    return (PowMod(m - 2, n - 2, divisor) * GetNumOfAntipalindromic(2, m)) % divisor;
  }
}

int main(int argc, char *argv[])
{
  int t;
  cin >> t;

  for (int i = 0; i < t; ++i)
  {
    long long n, m, result; 
    
    cin >> n >> m;
    cout <<GetNumOfAntipalindromic(n, m) << endl;
  }
  return 0;
}