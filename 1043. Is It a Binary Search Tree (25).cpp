#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Node {
    int key;
    int left;
    int right;
};

Node node[1010];
int N;
int num[1010];
vector<int> output1;
vector<int> output2;
vector<int> output3;

void build(int root, int add) {
    if (node[add].key < node[root].key) {
        if (node[root].left != -1) {
            build(node[root].left, add);
        } else {
            node[root].left = add;
        }
    } else {
        if (node[root].right != -1) {
            build(node[root].right, add);
        } else {
            node[root].right = add;
        }
    }
}

void dfs1(int root) {
    if (root == -1) return;
    output1.push_back(node[root].key);
    dfs1(node[root].left);
    dfs1(node[root].right);
}

void dfs2(int root) {
    if (root == -1) return;
    output2.push_back(node[root].key);
    dfs2(node[root].right);
    dfs2(node[root].left);
}

void dfs3(int root) {
    if (root == -1) return;
    dfs3(node[root].left);
    dfs3(node[root].right);
    output3.push_back(node[root].key);
}

void dfs4(int root) {
    if (root == -1) return;
    dfs4(node[root].right);
    dfs4(node[root].left);
    output3.push_back(node[root].key);
}

int main() {
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &node[i].key);
        node[i].left = -1;
        node[i].right = -1;
    }
    for (int i = 1; i < N; ++i) {
        build(0, i);
    }
    dfs1(0);
    dfs2(0);
    int flag1 = 1, flag2 = 1;
    for (int i = 0; i < N; ++i) {
        if (output1[i] != node[i].key) {
            flag1 = 0;
            break;
        }
    }
    for (int i = 0; i < N; ++i) {
        if (output2[i] != node[i].key) {
            flag2 = 0;
            break;
        }
    }
    if (flag1 || flag2) {
        printf("YES\n");
        if (flag1) {
            dfs3(0);
        } else if (flag2) {
            dfs4(0);
        }

        printf("%d", output3[0]);
        for (int i = 1; i < N; ++i) {
            printf(" %d", output3[i]);
        }
        printf("\n");
    } else {
        printf("NO\n");
    }
    return 0;
}