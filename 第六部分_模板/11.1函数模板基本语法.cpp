//
//#include <iostream>
//#include <string>
//
//using namespace std;
////函数模板
//
////两个整型交换的函数
////void swapInt(int &a, int &b) {
////	int temp = a;
////	a = b;
////	b = temp;
////}
//
////两个浮点型交换的函数
////void swapDouble(double &a, double &b) {
////	double temp = a;
////	a = b;
////	b = temp;
////}
//
//
//template<typename T> //声明一个模板 告诉编译器后面代码中紧跟的T不要报错 T是一个通用数据类型
//void mySwap(T &a, T &b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//mySwap(a, b);
//	mySwap<int>(a, b);
//	cout << a << " " << b<< endl;
//
//	//double c = 1.2;
//	//double d = 2.0;
//	//swapDouble(c, d);
//	//cout << c << " " << d << endl;
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
//
