#include <algorithm>
#include <stdio.h>
using namespace std;

long long num[400010];

int main() {
    int N1;
    scanf("%d", &N1);
    for (int i = 0; i < N1; ++i) {
        scanf("%lld", &num[i]);
    }
    int N2;
    scanf("%d", &N2);
    for (int i = N1; i < N1+N2; ++i) {
        scanf("%lld", &num[i]);
    }
    sort(num, num+N1+N2);
    int mid;
    if((N1+N2)%2==0) {
        mid = (N1+N2) / 2 - 1;
    } else {
        mid = (N1+N2) / 2;
    }
    printf("%lld\n", num[mid]);
    return 0;
}