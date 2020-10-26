//
//#include <iostream>
//#include <string>
//
//using namespace std;
////继承中的构造与析构顺序
//
////父先构造，子再构造，子先析构，父再析构
//class Base {
//public:
//	Base() {
//		cout << "Base的构造函数" << endl;
//	}
//	~Base() {
//		cout << "Base的析构函数" << endl;
//	}
//	void func() {
//		cout << "This is parent function" << endl;
//	}
//
//};
//
//class Son :public Base {
//public:
//	Son() {
//		cout << "Son的构造函数" << endl;
//	}
//	~Son() {
//		cout << "Son的析构函数" << endl;
//	}
//	void func() {
//		cout << "This is kid function" << endl;
//	}
//};
//
//
//int main()
//{
//	Son s1;
//	s1.Base::func(); //访问父类中的同名函数 需要加上作用域
//
//
//
//	cout << "Hello World!" << endl;
//	
//	return 0;
//}
//
