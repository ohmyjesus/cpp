/*
#include <iostream>
#include <string>

using namespace std;


//������Ϊ�����ķ���ֵ
//1.��Ҫ���ؾֲ�����������
int& test01() {
	int a = 10;
	return a;
}

//2.�����ĵ��ÿ�����Ϊ��ֵ
int& test02() {
	static int b = 20;
	return b;
}
int main() {

	//int &ref = test01();
	//cout << ref << endl;
	//cout << ref << endl;

	int &ref = test02();
	cout << ref << endl;
	cout << ref << endl;
	test02() = 2000;
	cout << ref << endl;
	cout << ref << endl;
	system("pause");
	return 0;
}

*/