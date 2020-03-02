#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	cout << "hello, chenzhe" << n+1 << endl;
	int m;
	cin >> m;
	for(int i = 0; i < n; i++) {
		cout << i;
	}
	for(int i = 0; i < m; i++) {
		cout << i + 2;
	}
	return 0;
}
