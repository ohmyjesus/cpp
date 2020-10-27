//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Person1 {
//public:
//	void showPerson1() {
//		cout << "showPerson1的调用" << endl;
//	}
//};
//
//class Person2 {
//	void showPerson2() {
//		cout << "showPerson2的调用" << endl;
//	}
//};
//
//template<typename T>
//class MyClass {
//public:
//	T obj;
//
//	//类模板中的成员函数在调用时才创建
//	void func1() {
//		obj.showPerson1();
//	}
//
//	void func2() {
//		obj.showPerson2();
//	}
//
//};
//
//void test01() {
//	MyClass<Person1>m;
//	m.func1();
//	//m.func2();
//
//}
//int main()
//{
//	test01();
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
