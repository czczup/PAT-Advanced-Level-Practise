#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v1;
	cout << v1.size() << endl;
	
	vector<int> v2(10); // 定义长度为10的int数组，默认每个元素都为0
	
	vector<int> v3; // 定义vector变量v3 
	v3.resize(8); // 将长度resize为8,默认8个元素都为0
	
	vector<int> v4(100, 9); // 把长度为100的vector中的每个元素都初始化为9
	
	v4[1] = 4;
	cout << v4[1];
	 
	return 0;
}
