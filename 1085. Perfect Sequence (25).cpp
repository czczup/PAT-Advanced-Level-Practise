#include <iostream>
#include <algorithm>

using namespace std;

struct DP {
    int max;
    int min;
    int cnt;
};

DP dp[100010];
int num[100010];

int main() {
    int n, p;
    cin >> n >> p;
    for (int i = 1; i <= n; ++i) {
        cin >> num[i];
    }
    dp[1].max = num[1];
    dp[1].min = num[1];
    dp[1].cnt = 1;
    for (int i = 1; i < n; ++i) {
        int temp_max = max(dp[i].max, num[i+1]);
        int temp_min = min(dp[i].min, num[i+1]);
        if (temp_max <= temp_min * p) {
            dp[i+1].cnt = dp[i].cnt + 1;
            dp[i+1].max = temp_max;
            dp[i+1].min = temp_min;
        } else {
            dp[i+1].cnt = dp[i].cnt;
            dp[i+1].max = dp[i].max;
            dp[i+1].min = dp[i].min;
        }
    }
    cout << dp[n].cnt << endl;
    return 0;
}
