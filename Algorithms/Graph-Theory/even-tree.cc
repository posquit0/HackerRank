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

const int MOD = 1000000007;
const double EPSILON = 1e-10;

vector< vector< int > > graph;
int total = 0;

int
depthFirstSearchForEvenTree(int parent) {
  int flag = 1;
  vector< int > root = graph[parent];
  if (root.size()) {
    for (vector< int >::iterator child = root.begin(); child != root.end(); child++) {
      flag ^= depthFirstSearchForEvenTree(*child);
    }
  }
  if (!flag) total++;
  return flag;
}

int
main(int argc, char *argv[]) {
  int n, m;
  cin >> n >> m;
  graph.resize(n);
  REP (i, 0, m) {
    int v1, v2;
    cin >> v1 >> v2;
    v1--; v2--;
    graph[v2].push_back(v1);
  }
  depthFirstSearchForEvenTree(0);
  cout << total - 1 << endl;
  return 0;
}