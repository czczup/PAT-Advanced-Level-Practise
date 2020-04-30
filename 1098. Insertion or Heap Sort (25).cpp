#include <iostream>
#include <algorithm>

using namespace std;

int before[100] = {0};
int after[100] = {0};
int n;


void fixHeap(int root, int end) {
    if (root > end) return;
    fixHeap(root*2+1, end);
    fixHeap(root*2+2, end);
    if (root*2+2 <= end) {
        int left = after[root*2+1];
        int right = after[root*2+2];
        if (after[root] < max(left, right)) {
            if (left > right) {
                after[root*2+1] = after[root];
                after[root] = left;
            } else {
                after[root*2+2] = after[root];
                after[root] = right;
            }
            fixHeap(0, end);
        }
    } else if (root*2+1 == end) {
        int left = after[root*2+1];
        if (after[root] < left) {
            after[root*2+1] = after[root];
            after[root] = left;
            fixHeap(0, end);
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> before[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> after[i];
    }
    int p = 0;
    int flag = 1;
    for (int i = 1; i < n; ++i) {
        if (after[i] < after[i-1]) { // increase
            p = i;
            break;
        }
    }
    for(int i=p; i<n; i++) {
        if(after[i]!=before[i]) {
            flag = 0;
        }
    }
    if (flag) {
        cout << "Insertion Sort" << endl;
        sort(after, after+p+1);
    } else {
        cout << "Heap Sort" << endl;
        p = n;
        for (int i = n-1; i > 1; i--) {
            if(after[0] > after[i]) {
                int temp = after[0];
                after[0] = after[i];
                after[i] = temp;
                p = i - 1;
                break;
            }
        }
        fixHeap(0, p);
    }

    for (int i = 0; i < n; ++i) {
        if (i==0) cout << after[0];
        else cout << " " << after[i];
    }
    cout << endl;
    return 0;
}
