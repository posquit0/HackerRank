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

void
printArray(vector< int > arr) {
  int size = arr.size();
  REP(i, 0, size) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void
partition(vector< int > arr) {
  vector< int > left;
  vector< int > right;
  int p = arr[0];
  int size = arr.size();
  REP(i, 1, size) {
    if (arr[i] >= p) right.push_back(arr[i]);
    else left.push_back(arr[i]);
  }
  left.insert(left.end(), p);
  left.insert(left.end(), right.begin(), right.end());
  printArray(left);
}

int
main(int argc, char *argv[]) {
  vector< int > arr;
  int size;
  cin >> size;
  REP(i, 0, size) {
    int t;
    cin >> t;
    arr.push_back(t);
  }  
  partition(arr);
  return 0;
}