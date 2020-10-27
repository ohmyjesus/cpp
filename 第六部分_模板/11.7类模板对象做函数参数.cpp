//#include <iostream>
//#include <string>
//
//using namespace std;
//
////类模板对象做函数参数
//template<typename T1,typename T2>
//class Person {
//public:
//	Person(T1 name, T2 age) {
//		this->name = name;
//		this->age = age;
//	}
//
//	void showPerson() {
//		cout << this->name << " " << this->age << " " << endl;
//	}
//
//	T1 name;
//	T2 age;
//};
//
////1.指定传入类型
//void printPerson1(Person<string, int> &p) {
//	p.showPerson();
//}
//
//
////2.参数模板化
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> &p) {
//	p.showPerson();
//	cout << typeid(T1).name() << endl;
//	cout << typeid(T2).name() << endl;
//}
//
////3.整个类模板化
//template<class T>
//void printPerson3(T &p) {
//	p.showPerson();
//	cout << typeid(T).name() << endl;
//}
//
//int main()
//{
//	Person<string, int>p1("xyh", 18);
//	printPerson1(p1);
//	
//	Person<string, int>p2("ly", 18);
//	printPerson2(p2);
//
//	Person<string, int>p3("xkk", 18);
//	printPerson3(p3);
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
