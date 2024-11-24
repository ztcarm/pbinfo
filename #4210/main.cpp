#include <bits/stdc++.h>
using namespace std;
bool FCrescRec(int32_t n) {
  if(n % 10 > n / 10 % 10 && n > 9) return 0;
  if(n > 99) return FCrescRec(n / 10);
  return 1;
}
int main() {
  cout << FCrescRec(4) << '\n';
  cout << FCrescRec(975311) << '\n';
  cout << FCrescRec(43711) << '\n';
  cout << FCrescRec(24) << '\n';
  return 0;
}
