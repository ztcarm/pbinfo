#include <fstream>
#include <cstring>
#include <cstdint>
using namespace std;
void caps(char s[]) {
    bool f1 = false, f2 = false;
    char s2[257];
    int16_t cnt = 0;
    for(int16_t i = 0; s[i]; ++i) {
        if('#' == s[i]) {
            f1 = true;
            f2 = !f2;
        }
        else if(f1 && f2)
            if(isalpha(s[i])) s[i] = s[i] - 32;
    }
    for(int16_t i = 0; s[i]; ++i)
        if('#' != s[i]) s2[cnt++] = s[i];
    s2[cnt] = '\0';
    for(int16_t i = 0; s[i]; ++i)
        s[i] = s2[i];
}
int main()
{
    ifstream in("capslock.in");
    ofstream out("capslock.out");
    char s[257];
    in.get(s, 256);
    caps(s);
    out << s;
    return 0;
}
