#include <iostream>
using namespace std;
struct stu {
	int number;
	int score;
}; 
bool cmp(stu a, stu b) {
	return a.score != b.score ? a.score > b.score : a.number < b.number;
}
