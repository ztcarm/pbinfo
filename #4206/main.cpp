#include <bits/stdc++.h>
using namespace std;
int32_t CifDiv3Rec(int32_t num, int32_t cnt = 0) {
  if(num % 10 % 3 == 0) cnt++;
  if(num > 9) return CifDiv3Rec(num / 10, cnt);
  return cnt;
}
int main() {
  cout << CifDiv3Rec(2009376);
  return 0;
}
