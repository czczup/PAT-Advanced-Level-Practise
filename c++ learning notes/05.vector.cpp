#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v1;
	cout << v1.size() << endl;
	
	vector<int> v2(10); // ���峤��Ϊ10��int���飬Ĭ��ÿ��Ԫ�ض�Ϊ0
	
	vector<int> v3; // ����vector����v3 
	v3.resize(8); // ������resizeΪ8,Ĭ��8��Ԫ�ض�Ϊ0
	
	vector<int> v4(100, 9); // �ѳ���Ϊ100��vector�е�ÿ��Ԫ�ض���ʼ��Ϊ9
	
	v4[1] = 4;
	cout << v4[1];
	 
	return 0;
}
