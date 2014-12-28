#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <cstring>
using namespace std;

int N, M;

vector<int> edges[100005];

int farest = 0;
int fard[100005];
int da[100005];
int db[100005];
int v[100005];

void dfs(int cur, int parent, int* arr) {
  if (cur == parent) arr[cur] = 0;
  else arr[cur] = arr[parent] + 1;
  v[cur] = 1;
  
  for (int i = 0; i < edges[cur].size(); i++) {
    if (v[edges[cur][i]] != 1) {
      dfs(edges[cur][i], cur, arr);
    }
  }
}


int main() {

  scanf("%d %d", &N, &M);

  for (int i = 0; i < N-1; i++) {
    int a, b;
    scanf("%d %d", &a, &b);
    edges[a].push_back(b);
    edges[b].push_back(a);
  } 

  memset(da, 0, sizeof(da));
  memset(v, 0, sizeof(v));
  
  dfs(1, 1, da);
  int maxa = 0;
  int farest = 0;
  for (int i = 1; i <= N; i++) {
    if (da[i] > farest) {
      maxa = i;
      farest = da[i];
    }
  }

  memset(da, 0, sizeof(da));

  dfs(maxa, maxa, da);
  int maxb = 0;
  farest = 0;
  for (int i = 1; i <= N; i++) {
    if (da[i] > farest) {
      maxb = i;
      farest = da[i];
    }
  }
  
  memset(v, 0, sizeof(v));
  dfs(maxb, maxb, db);
  
//   for (int i = 1; i <= N; i++) {
//     printf("%d ", d[i]);
//   }
//   printf("\n%d\n", farest);
  
  memset(fard, 0, sizeof(fard));
  
  while (M--) {
    int V, K;
    scanf("%d %d", &V, &K);
    int start = V;
    
    long long sum = max(da[start], db[start]);
    sum = sum + (long long)farest*(K-1);

    printf("%Ld\n", sum);
  }

  return 0;
}