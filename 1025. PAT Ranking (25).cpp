#include <iostream>
#include <algorithm>

using namespace std;
struct Testee {
    long long regNumber;
    int finalRank;
    int locNumber;
    int localRank;
    int score;
};
int N, K;
Testee testee[30010];

bool cmp(Testee testee1, Testee testee2) {
    if (testee1.score == testee2.score) {
        return testee1.regNumber < testee2.regNumber;
    } else {
        return testee1.score > testee2.score;
    }
}


int main() {
    cin >> N;
    int cnt = 0;
    for (int i = 1; i <= N; ++i) {
        cin >> K;
        for (int j = 0; j < K; ++j) {
            testee[cnt].locNumber = i;
            cin >> testee[cnt].regNumber >> testee[cnt].score;
            cnt++;
        }
        sort(testee+cnt-K, testee+cnt, cmp);
        testee[cnt-K].localRank = 1;
        for (int j = 1; j < K; ++j) {
            int index = cnt-K+j;
            if (testee[index].score == testee[index-1].score) {
                testee[index].localRank = testee[index-1].localRank;
            } else {
                testee[index].localRank = j + 1;
            }
        }
    }
    sort(testee, testee+cnt, cmp);
    testee[0].finalRank = 1;
    for (int i = 1; i < cnt; ++i) {
        if (testee[i].score == testee[i-1].score) {
            testee[i].finalRank = testee[i-1].finalRank;
        } else {
            testee[i].finalRank = i + 1;
        }
    }
    cout << cnt << endl;
    for (int i = 0; i < cnt; ++i) {
        printf("%013lld %d %d %d\n", testee[i].regNumber, testee[i].finalRank, testee[i].locNumber, testee[i].localRank);
    }
    return 0;
}