/*
#include <iostream>
#include <string>

using namespace std;

//函数的重载定义
//1.同一个作用域
//2.函数名相同
//3.参数类型不同，或者个数不同，或者顺序不同

//函数重载的注意事项
//1. 引用作为函数的重载
void func(int &a) {
	cout << "123" << endl;
}

void func(const int &a) {
	cout << "456" << endl;
}
//2.函数重载碰到默认参数

int main() {
	const int a = 10;
	func(a);

	

	cout << "hello world" << endl;
	return 0;
}
*/