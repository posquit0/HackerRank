#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector< vector< int > > faroffs;
vector< vector< int > > nexts;
vector< vector< int > > distances;
vector< int > most_distance;
vector< int > visit_cnt;
int n, m;

void find_faroffs(int start, int cur, int prev, int dist) {
  int size = nexts[cur].size();
  distances[start][cur] = dist;
  if (!(size > 1) && (prev != -1)) {
    if (most_distance[start] < dist) {
      most_distance[start] = dist;
      if (faroffs[start].size()) {
        faroffs[start].clear();
        faroffs[start].push_back(cur);
      }
    }
    else if (most_distance[start] == dist) {
      faroffs[start].push_back(cur);
    }
    return;
  }
  for (int i = 0; i < size; i++) {
    int next = nexts[cur][i];
    if (next != prev) find_faroffs(start, next, cur, dist + 1);
  }
}

int calc_total_distance(int v, int k) {
  int total = 0;
  int start = v;
  
  for (int i = 0; i < k; i++) {
    if (most_distance[start] == -1) {
      distances[start].resize(n, -1);
      find_faroffs(start, start, -1, 0);
    }
    total += most_distance[start];
    sort(
      faroffs[start].begin(), faroffs[start].end(),
      [&](const int & i, const int & j) -> bool {
        return visit_cnt[i] < visit_cnt[j];
      }
    );
    start = faroffs[start].front();
    visit_cnt[start] += 1;
  }
  return total;
}

int main(int argc, char *argv[]) {
  cin >> n >> m;

  faroffs.resize(n);
  nexts.resize(n);
  distances.resize(n);
  most_distance.resize(n, -1);

  for (int i = 0; i < n - 1; ++i) {
    int x, y;
    cin >> x >> y;
    nexts[x - 1].push_back(y - 1);
    nexts[y - 1].push_back(x - 1);
  }

  for (int i = 0; i < m; ++i) {
    int v, k;
    cin >> v >> k;
    visit_cnt.clear();
    visit_cnt.resize(n, 0);
    cout << calc_total_distance(v - 1, k) << endl;
  }

  return 0;
}