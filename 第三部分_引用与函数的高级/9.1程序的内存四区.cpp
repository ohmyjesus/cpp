/*
#include <iostream>
#include <string>


using namespace std;


int a = 15; //全局变量
const int e = 40;


int * func() {
	int * p = new int(10);
	return p;
}
void test01() {
	int *p = func();
	cout << *p << endl;
	delete p;

}

void test02() {
	int *p1 = new int[10];  //10代表数组有10个元素
	for (int i = 0; i < 10; i++) {
		*p1 = i + 100;
		p1++;
	}
	p1 -= 10;
	for (int i = 0; i < 10; i++) {
		cout << *p1 << endl;
		p1++;
	}
	//delete [] p1;

}

int main()
{
	/* 全局区
	int b = 10; //局部变量
	int c = 20;

	static int d = 30;  //静态变量

	const int f = 50;

	cout << (int)&a << endl;
	cout << (int)&b << " " << (int)&c << endl;
	cout << (int)&d << endl;
	cout << (int)&"hello world" << endl; //常量
	cout << (int)&e << endl;
	cout << (int)&f << endl;
	

	//栈区： 不要返回局部变量的地址

	int *p = func();
	cout << *p << endl;
	cout << *p << endl;
	

	//堆区： 主要利用new在堆区开辟内存
	 
	int *p = func();
	cout << *p << endl;
	cout << *p << endl;
	
	test01();
	test02();
	
    std::cout << "Hello World!\n";
	
}
*/


