#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	string ch[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	string number;
	cin >> number;
	if(number[0]=='-') {
		cout << "Fu ";
		number = number.substr(1, number.length()-1);
	}
	int n = number.length();
	for(int i=0;i<n;i++) {
		int len = number.length();
		if(i!=0) cout << " ";
		if(number[0]!='0'){
			if (len == 9) {
				cout << ch[number[0]-'0'] << " " << "Yi";
			} else if (len == 8) {
				cout << ch[number[0]-'0'] << " " << "Qian";
			} else if (len == 7) {
				cout << ch[number[0]-'0'] << " " << "Bai";
			} else if (len == 6) {
				cout << ch[number[0]-'0'] << " " << "Shi";
			} else if (len == 5) {
				cout << ch[number[0]-'0'] << " " << "Wan";
			} else if (len == 4) {
				cout << ch[number[0]-'0'] << " " << "Qian";
			} else if (len == 3) {
				cout << ch[number[0]-'0'] << " " << "Bai";
			} else if (len == 2) {
				cout << ch[number[0]-'0'] << " " << "Shi";
			} else if (len == 1) {
				cout << ch[number[0]-'0'] << endl;
			}
		} else {
			if (len == 8) {
				cout << "Qian";
			} else if (len == 5) {
				cout << "Wan";
			}
		}
		number = number.substr(1, number.length()-1);
	}

	return 0;
}
