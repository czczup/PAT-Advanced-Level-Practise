#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;
	int female_max = 0, male_min = 100;
	int female_cnt = 0, male_cnt = 0;
	string female_name, female_id;
	string male_name, male_id;
	for(int i=0; i<N; i++) {
		string name, id;
		char gender;
		int grade;
		cin >> name >> gender >> id >> grade;
	    if(gender=='F') { // Female
	        female_cnt++;
	    	if (grade >= female_max) {
	    		female_max = grade;
	    		female_name = name;
	    		female_id = id;
			}	
		} else { // Male
			male_cnt++;
			if (grade <= male_min) {
	    		male_min = grade;
	    		male_name = name;
	    		male_id = id;
			}
		}
	}
	if(male_cnt==0) {
		cout << female_name << " " << female_id << endl;
		cout << "Absent" << endl;
		cout << "NA" << endl;
	} else if (female_cnt==0) {
		cout << "Absent" << endl;
		cout << male_name << " " << male_id << endl;
		cout << "NA" << endl;
	} else {
		cout << female_name << " " << female_id << endl;
		cout << male_name << " " << male_id << endl;
		cout << female_max-male_min << endl;
	}
	
	return 0;
	
}
