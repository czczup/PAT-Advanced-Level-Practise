#include <iostream>
#include <sstream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int c = a + b;
	if (c < 0) {
		cout << "-";
		c = -c;
	}
	stringstream ss;
	ss << c;
	string s = ss.str(); 
	if (s.length()<=3){
		cout << s;
	} else {
		int length = s.length();
		for(int i=1;i<=(length-1)/3;i++){
			s.insert(length-i*3, ",");
		}
		cout << s;
	}
	return 0;
} 
