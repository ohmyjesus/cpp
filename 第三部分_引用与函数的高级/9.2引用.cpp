/*
#include <iostream>
#include <string>

using namespace std;


//交换函数

//1.值传递
void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

//2.地址传递
void swap2(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3.引用传递
void swap3(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}


int main() {

	
	int a = 10;
	int b = 20;
	
	//1. 引用必须初始化
	//int &c;

	//2.引用在初始化后，就不可以发生改变
	int c = 20;
	b = c;
	//swap1(a, b);
	//cout << a << " " << b << endl;
	//cout << endl;

	//swap2(&a, &b);
	//cout << a << " " << b << endl;
	//cout << endl;

	swap3(a, b);
	cout << a << " " << b << endl;
	cout << endl;

	cout << "hello world" << endl;
	system("pause");
	return 0;
}
*/