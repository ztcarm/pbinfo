#include <bits/stdc++.h>
using namespace std;
int32_t cmmdc(int32_t a, int32_t b) {
  if(a * b == 0) return 0;
  if(a == b) return a;
  if(a > b) return cmmdc(a - b, b);
  else return cmmdc(a, b - a);
}
int main() {
  cout << cmmdc(18, 24);
  return 0;
}
