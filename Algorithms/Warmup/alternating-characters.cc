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

using namespace std;

#define REP(i, n) for (int i = 0; i < (int)n; i++)
#define FOR_ITER(c, it) for (typeof(c.begin()) it = c.begin(); it != c.end(); it++)
#define ALL(c) (c).begin(), (c).end()

int
calc(string s) {
  int cost = 0;
  char ch = '\0';
  int size = s.length();
  REP(i, size) {
    if (s[i] != ch) ch = s[i];
    else cost += 1;
  }
  return cost;
}

int
main(int argc, char *argv[]) {
  int t;
  cin >> t;
  REP(i, t) {
    string s;
    cin >> s;
    cout << calc(s) << endl;
  }  
  return 0;
}