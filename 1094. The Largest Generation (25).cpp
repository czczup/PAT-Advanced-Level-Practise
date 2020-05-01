#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Node {
    int level;
    vector<int> childs;
};

Node node[110]; // less than 100

int sum(int index) {
    int amount = 0;
    int childAmount = node[index].childs.size();
    for (int i = 0; i < childAmount; ++i) {
        amount += sum(node[index].childs[i]);
    }
    return amount + 1;
}


int height(int index) {
    int maxh = 0;
    int childAmount = node[index].childs.size();
    for (int i = 0; i < childAmount; ++i) {
        int childh = height(node[index].childs[i]);
        maxh = childh > maxh ? childh : maxh;
    }
    return maxh + 1;
}

void label_level(int index) {
    int level = node[index].level + 1;
    int childAmount = node[index].childs.size();
    for (int i = 0; i < childAmount; ++i) {
        node[node[index].childs[i]].level = level;
        label_level(node[index].childs[i]);
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    for (int i = 1; i <= M; ++i) {
        int id, num;
        cin >> id >> num;
        for (int j = 0; j < num; ++j) {
            int temp;
            cin >> temp;
            node[id].childs.push_back(temp);
        }
    }
    node[1].level = 1;
    label_level(1);
    int cnt[110] = {0};
    for (int i = 1; i <= N; ++i) {
        cnt[node[i].level]++;
    }
    int max_index = 0;
    int max_value = 0;
    for (int i = 1; i <= N; ++i) {
        if (cnt[i] > max_value) {
            max_value = cnt[i];
            max_index = i;
        }
    }
    cout << max_value << " " << max_index << endl;
}