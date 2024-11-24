#include <bits/stdc++.h>
using namespace std;
int32_t DifParImpar(int32_t n, int16_t cntp = 0, int16_t cnti = 0) {
  if(n % 10 % 2 == 0) cntp++;
  else cnti++;
  if(n > 9) return DifParImpar(n / 10, cntp, cnti);
  return cntp - cnti;
}
int main() {
  cout << DifParImpar(240) << '\n';
  cout << DifParImpar(21377) << '\n';
  return 0;
}
