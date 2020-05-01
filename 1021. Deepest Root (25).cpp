#include <stdio.h>
#include <algorithm>

using namespace std;
int graph[10010][10010] = {0};
int visited[10010] = {0};
int cnt[10010] = {0};
int n;

int dfs(int root, int color) {
    visited[root] = color;
    int max_depth = 0;
    for (int i = 1; i <= n; ++i) {
        if (graph[root][i] != 0 && visited[i] == 0) { // exist path and not visites
            max_depth = max(max_depth, dfs(i, color));
        }
    }
    return max_depth+1;
}

void dfs2(int root, int color) {
    visited[root] = color;
    for (int i = 1; i <= n; ++i) {
        if (graph[root][i] != 0 && visited[i] == 0) { // exist path and not visites
            dfs(i, color);
        }
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n-1; ++i) {
        int p1, p2;
        scanf("%d %d", &p1, &p2);
        graph[p1][p2] = 1;
        graph[p2][p1] = 1;
    }
    int depth[10010] = {0};
    int max_depth = 0;
    depth[1] = dfs(1, 1);
    max_depth = max(max_depth, depth[1]);
    for (int i = 2; i <=n && visited[i]!=0; ++i) {
        for (int j = 0; j <= n; ++j) { // init visited array
            visited[j] = 0;
        }
        depth[i] = dfs(i, i);
        max_depth = max(max_depth, depth[i]);
    }
    for (int i = 1; i <=n ; ++i) {
        if (visited[i] == 0)
            dfs2(i, i);
    }

    for (int i = 1; i <= n; ++i) {
        cnt[visited[i]]++;
    }
    int component_cnt = 0;
    for (int i = 1; i <= n; ++i) {
        if (cnt[i] != 0) {
            component_cnt++;
        }
    }
    if (component_cnt == 1) {
        for (int i = 1; i <= n; ++i) {
            if (depth[i] == max_depth) {
                printf("%d\n", i);
            }
        }
    } else {
        printf("Error: %d components\n", component_cnt);;
    }
    return 0;
}
