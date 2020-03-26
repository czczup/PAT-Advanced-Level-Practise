#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	int N;
	cin >> N;
	int flag = 0;
	vector<string> names;
	vector<string> passwds;
	for(int i=0;i<N;i++) {
		string name, passwd;
		cin >> name >> passwd;
		int cnt = 0;
		for(int j=0; j<passwd.length(); j++) {
			if (passwd[j]=='1') {
				passwd[j]='@'; cnt++;
			} else if (passwd[j]=='0') {
				passwd[j]='%'; cnt++;
			} else if (passwd[j]=='l') {
				passwd[j]='L'; cnt++;
			} else if (passwd[j]=='O') {
				passwd[j]='o'; cnt++;
			}
		}
		if (cnt != 0) {
			names.push_back(name);
			passwds.push_back(passwd);
			flag++;
		}
	}
	if (flag == 0) {
		if (N==1) {
			cout << "There is 1 account and no account is modified" << endl;
		} else {
			cout << "There are "<< N <<" accounts and no account is modified" << endl;
		}
	} else {
		cout << flag << endl;
	}
	for(int i=0;i<flag;i++) {
		cout << names[i] << " " << passwds[i] << endl;
	}
	return 0;
}
