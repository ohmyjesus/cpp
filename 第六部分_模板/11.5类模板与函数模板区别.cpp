//#include <iostream>
//#include <string>
//
//using namespace std;
//template<typename T1 = string, typename T2 = int>
//class Person {
//public:
//	Person(T1 name, T2 age) {
//		this->name = name;
//		this->age = age;
//	}
//	T2 age;
//	T1 name;
//	void showPerson() {
//		cout << this->name << endl;
//		cout << this->age << endl;
//	}
//};
//
//
//int main()
//{
//	//1. 类模板没有自动类型推导使用方式
//	Person<string, int>p1("xyh",12);
//	p1.showPerson();
//
//	//2. 类模板在模板列表中可以有默认参数
//	Person<>p2("ly", 9);
//	p2.showPerson();
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
