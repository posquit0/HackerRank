#include <iostream>
#include <iterator>
#include <functional>
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
#include <cstdlib>
#include <cmath>

using namespace std;

#define REP(i, a, n) for (int i = a; i < (int) n; i++)
#define FOR_ITER(c, it) for (typeof(c.begin()) it = c.begin(); it != c.end(); it++)
#define ALL(c) (c).begin(), (c).end()

const int MOD = 1000000007;
const double EPSILON = 1e-10;

int
game(string s) {
  int frequency[26] = {};
  int size = s.length();
  int odd_num = 0;
  REP(i, 0, size) {
    int idx = s[i] - 'a';
    frequency[idx] ++;
  }
  REP(i, 0, 26) {
    if (frequency[i] % 2) odd_num++;
  }
  if (odd_num < 2) return true;
  return false;
}

int
main(int argc, char *argv[]) {
  string s;
  cin >> s;
  
  int flag = game(s);
  if (flag) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}