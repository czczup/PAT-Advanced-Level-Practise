#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	vector<int> v(10);
	for(int i = 0; i < 10; i++) {
		cin >> v[i];
	} 
	sort(v.begin(), v.end());
	
	int arr[10];
	for(int i = 0; i < 10; i++ ){
		cin >> arr[i];
	}
	sort(arr, arr + 10, cmp);
	return 0;
}
