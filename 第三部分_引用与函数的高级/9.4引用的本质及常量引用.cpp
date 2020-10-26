/*
#include <iostream>
#include <string>


using namespace std;

int main() {
	

	cout<<"hello world"<<endl;
	return 0;
}

//1. 引用的本质就是一个指针常量
//int &a = b ;  int * const a = &b; 也就解释了为什么引用不可以修改

//2. 常量引用  主要用来修饰形参，防止误操作
//在形参中加上const修饰形参，防止形参改变实参

void showValue(const int &val) {
	cout << val << endl;
}

int main() {
	int a = 10;
	showValue(a);


	system("pause");
	return 0;
}
*/