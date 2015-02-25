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
#include <limits>

using namespace std;

#define REP(n) for (int i = 0; i < (int) n; i++)
#define REPE(i, a, n) for (int i = a; i < (int) n; i++)
#define ALL(c) (c).begin(), (c).end()

const int MOD = 1000000007;
const double EPSILON = 1e-10;

void
cutTheSticks(int arr[1000]) {
  int total = 0;
  vector< int > sticks;
  REPE(i, 0, 1000) {
    if (arr[i] != 0) {
      total += arr[i];
      sticks.push_back(arr[i]);
    }
  }
  for (int stick: sticks) {
    cout << total << endl;
    total -= stick;
  }
}

int
main(int argc, char *argv[]) {
  int arr[1000] = {};
  int n;
  cin >> n;
  REPE(i, 0, n) {
    int val;
    cin >> val;
    arr[val]++;
  }
  cutTheSticks(arr);
  return 0;
}