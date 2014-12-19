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
hammingWeight(string s1, string s2) {
  int distance = 0;
  int size = s1.length();
  REP(i, 0, size) {
    if (s1[i] != s2[i] || s1[i] == '1') distance++;
  }
  return distance;
}

void
game(int n, int m) {
  int max_num, max_distance = 0;
  vector< string > bits;
  REP(i, 0, n) {
    string s;
    cin >> s;
    bits.push_back(s);
  }
  REP(i, 0, n - 1) {
    REP(j, i + 1, n) {
      int d = hammingWeight(bits[i], bits[j]);
      if (max_distance < d) {
        max_distance = d;
        max_num = 1;
      }
      else if (max_distance == d) {
        max_num++;
      }
    }
  }
  cout << max_distance << endl << max_num << endl;
}

int
main(int argc, char *argv[]) {
  int n, m;
  cin >> n >> m;
  game(n, m); 
  return 0;
}