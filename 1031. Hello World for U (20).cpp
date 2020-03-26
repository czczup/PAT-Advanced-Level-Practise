#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;
	int n = s.length();
	int bot = 0, side = 0, flag = 0;
	for (int i=0; i<n;i++) {
		for(int j=0;j<n;j++) {
			side = (n-j)/2+1;
			if(j+side*2-2==n && j>=side) {
				bot = j;
				flag = 1;
				break;
			} 
		}
		if(flag==1) break;
	}

	int space = bot - 2;
	for(int i=0;i<side-1;i++){
		cout << s[i];
		for(int j=0;j<space;j++) {
			cout << " ";
		}
		cout << s[n-1-i] << endl;
	}
	cout << s.substr(side-1,bot) << endl;
	return 0;
}

