
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
void test01() {
	vector<int>v;

	//����reserveԤ���ռ�
	v.reserve(100000);

	int num = 0;	//ͳ�ƿ��ٴ���
	int* p = NULL;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);

		if (p != &v[0]) {
			p = &v[0];
			num++;
		}
	}
	cout << "num = " << num << endl;
}

int main()
{
	test01();

	cout << "Hello World!" << endl;
	return 0;
}

