#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector< vector< long long  > > faroffs;
vector< vector< long long > > nexts;
vector< vector< long long > > distances;
vector< long long > most_distance;
long long n, m;
long long diameter;

void find_faroffs(long long start, long long cur, long long prev, long long dist) {
  long long size = nexts[cur].size();
  distances[start][cur] = dist;
  distances[cur][start] = dist;
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

long long calc_total_distance(long long v, long long k) {
  long long total = 0;
  total += *max_element(distances[v].begin(), distances[v].end());
  total += (k - 1) * diameter;
  
  return total;
}

void prepare_distance_table() {
  int start = 0;
  find_faroffs(start, start, -1, 0);

  for (int i = 0; i < 2; i++) {
    start = faroffs[start].front();
    find_faroffs(start, start, -1, 0);
  }
  diameter = most_distance[start];
}

int main(int argc, char *argv[]) {
  cin >> n >> m;

  faroffs.resize(n);
  nexts.resize(n);
  distances.resize(n);
  most_distance.resize(n, -1);

  for (int i = 0; i < n; i++) {
    distances[i].resize(n, -1);
  }

  for (int i = 0; i < n - 1; ++i) {
    long long x, y;
    cin >> x >> y;
    nexts[x - 1].push_back(y - 1);
    nexts[y - 1].push_back(x - 1);
  }

  prepare_distance_table();

  for (int i = 0; i < m; ++i) {
    long long v, k;
    cin >> v >> k;
    cout << calc_total_distance(v - 1, k) << endl;
  }

  return 0;
}