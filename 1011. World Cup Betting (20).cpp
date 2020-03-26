#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	double a,b,c;
	double num = 1;
	for(int i=0;i<3;i++) {
		cin >> a >> b >> c;
		double m = max(a, max(b, c));
		if (m==a) {
			cout << "W ";
		} else if (m==b) {
			cout << "T ";
		} else {
			cout << "L ";
		}
		num = num * m;
	}
	printf("%.2f",(num*0.65-1)*2);
	return 0;
} 
