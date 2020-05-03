#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
vector<int> output;
int node[1010];
int num[1010];
int cnt = 0;
int N;

void dfs(int root) {
    if (root >= N) return;
    int left = root * 2 + 1;
    int right = root * 2 + 2;
    dfs(left);
    node[root] = num[cnt];
    cnt++;
    dfs(right);
}

void bfs(int root) {
    queue<int> q;
    q.push(root);
    while (!q.empty()) {
        int index = q.front();
        q.pop();
        output.push_back(node[index]);
        int left = index * 2 + 1;
        int right = index * 2 + 2;
        if (left < N) {
            q.push(left);
        }
        if (right < N) {
            q.push(right);
        }
    }

}
int main() {
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &num[i]);
    }
    sort(num, num+N);
    dfs(0);
    bfs(0);
    printf("%d", output[0]);
    for (int i = 1; i < N; ++i) {
        printf(" %d", output[i]);
    }
    printf("\n");
    return 0;
}
