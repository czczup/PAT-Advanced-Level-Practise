#include <iostream>
#include <string>
using namespace std;
int main() {
	string s = "hello, world";
	string s2 = s;
	string s3 = s + s2;
	cout << s3 << endl;
	string s4 = s.substr(4);
	string s5 = substr(5, 3);
	string s6;
	getline(cin, s6);
	cout << s6.length();
	return 0;
}
