#include <bits/stdc++.h>
using namespace std;
void cmmdc(int32_t a, int32_t b, int32_t &r) {
  if(a * b == 0) r = 0;
  else if(a == b) r = a;
  else if(a > b) cmmdc(a - b, b, r);
  else cmmdc(a, b - a, r);
}
int main() {
  int32_t r;
  cmmdc(18, 24, r);
  cout << r;
  return 0;
}
