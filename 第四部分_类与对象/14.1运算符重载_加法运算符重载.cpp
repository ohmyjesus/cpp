//#include <iostream>
//#include<string>
//
//using namespace std;
//
////加号运算符重载
//
//class Person {
//public:
//	int a;
//	int b;
//
//	//1. 成员函数重载+号
//	/*Person operator+(Person p) {
//		Person temp;
//		temp.a = this->a + p.a;
//		temp.b = this->b + p.b;
//		return temp;
//
//	}*/
//};
//
////2.全局函数重载+号
//Person operator+(Person p1, Person p2) {
//	Person temp;
//	temp.a = p1.a + p2.a;
//	temp.b = p1.b + p2.b;
//	return temp;
//}
//
//int main() {
//	Person p1;
//	p1.a = 10;
//	p1.b = 10;
//	Person p2;
//	p2.a = 10;
//	p2.b = 10;
//
//	Person p3 = p1 + p2;
//	cout << p3.a << endl;
//
//
//	cout << "Hello World!" << endl;
//	return 0;
//}