#include <iostream>
#include <algorithm>
using namespace std;

long long PAT[100010] = {0};
long long PA[100010] = {0};
long long P[100010] = {0};
int main() {
    string s;
    cin >> s;
    int Pcnt = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'P') {
            Pcnt++;
        }
        P[i] = Pcnt;
    }
    PA[0] = 0;
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == 'A') {
            PA[i] = PA[i-1] + P[i-1];
        } else {
            PA[i] = PA[i-1];
        }
    }
    PAT[0] = 0;
    PAT[1] = 0;
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == 'T') {
            PAT[i] = PAT[i-1] + PA[i-1];
        } else {
            PAT[i] = PAT[i-1];
        }
    }
    cout << PAT[s.length()-1]%1000000007 << endl;
    return 0;
}
