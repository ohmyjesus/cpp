/*
#include <iostream>
#include <string>

using namespace std;


//引用作为函数的返回值
//1.不要返回局部变量的引用
int& test01() {
	int a = 10;
	return a;
}

//2.函数的调用可以作为左值
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