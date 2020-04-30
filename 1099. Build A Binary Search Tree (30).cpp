#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

struct Node {
    int value;
    int left;
    int right;
};

Node node[110];
int cnt = 0;
int num[110] = {0};

vector<int> v;

void visit(int index) {
    if (index == -1) return;
    visit(node[index].left);
    node[index].value = num[cnt++];
    visit(node[index].right);
}

void bfs(int index) {
    queue<int> q;
    q.push(index);
    while(!q.empty()) {
        int i = q.front();
        v.push_back(node[i].value);
        q.pop();
        if (node[i].left != -1) {
            q.push(node[i].left);
        }
        if (node[i].right != -1) {
            q.push(node[i].right);
        }
    }
}

void build(int index) {
    int left, right;
    cin >> left >> right;
    node[index].left = left;
    node[index].right = right;
    if (node[index].left != -1)
        build(left);
    if (node[index].right != -1)
        build(right);
}

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        int left, right;
        cin >> left >> right;
        node[i].left = left;
        node[i].right = right;
    }
    for (int i = 0; i < N; ++i) {
        cin >> num[i];
    }
    sort(num, num+N);
    visit(0);
    bfs(0);
    for(int i=0; i<N; i++){
        if (i) cout << " ";
        cout << v[i];
    }
    return 0;
}