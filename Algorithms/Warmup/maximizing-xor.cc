#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <list>
#include <map>
#include <set>
#include <bitset>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

#define REP(i, n) for (int i = 0; i < (int)n; i++)

int
maxXOR(int l, int r) {
  int max_xor = 0;
  for (int i = l; i <= r; i++)
    for (int j = l; j <= r; j++)
      max_xor = max(max_xor, i ^ j);
  return max_xor;
}

int
main(int argc, char *argv[]) {
  int l, r;
  cin >> l >> r;
  cout << maxXOR(l, r);
  return 0;
}