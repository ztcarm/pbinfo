#include <fstream>
#include <cstdint>
using namespace std;
const int16_t MAXN = 22;
int main() {
  ifstream in("palindrom.in");
  ofstream out("palindrom.out");
  char s[MAXN];
  int16_t n;
  in >> n;
  in.getline(s, 21);
  while(n--) {
    in.getline(s, 21);
    int16_t ss = 0;
    while(s[ss] != '\0') ss++;
    bool f = true;
    for(int16_t i = 0; i < ss / 2 && f; ++i)
      if(s[i] != s[ss - i - 1]) f = 0;
    out << f << '\n';
  }
  return 0;
}
