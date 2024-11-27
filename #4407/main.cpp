#include <bits/stdc++.h>

#include <queue>

using namespace std;
ifstream in ("partitura.in");
ofstream out("partitura.out");
const int MAXN = 300000;
const int MAXH = 10000;
const int MAXD = 18;
int main() {
  int n;
  long long rez = 0, d, h, h1, h2;
  priority_queue < long long > q[MAXD + 1];
  in >> n;
  for (int i = 1; i <= n; i++) {
    in >> d >> h;
    q[d].push(h);
  }
  for (int i = MAXD; i > 0; i--) {
    while (q[i].size() >= 2) {
      h1 = q[i].top();
      q[i].pop();
      h2 = q[i].top();
      q[i].pop();
      q[i - 1].push(h1 + h2);
    }
  }
  while (!q[0].empty()) {
    h = q[0].top();
    rez += h * h;
    q[0].pop();
  }
  out << rez;
  return 0;
}