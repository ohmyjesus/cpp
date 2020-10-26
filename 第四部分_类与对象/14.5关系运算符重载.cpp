//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
////关系运算符重载
//
//class Person {
//public:
//	Person(string name, int age) {
//		this->name = name;
//		this->age = age;
//	}
//	//关系运算符==重载
//	bool operator==(Person &p) {
//		if (this->age == p.age && this->name == p.name) {
//			return true;
//		}
//		else
//			return false;
//	}
//
//	//关系运算符!=重载
//	bool operator!=(Person &p) {
//		if (this->age != p.age || this->name != p.name) {
//			return true;
//		}
//		else
//			return false;
//	}
//	string name;
//	int age;
//
//};
//
//int main()
//{
//	Person p1("xyh", 18); 
//	Person p2("ly", 18);
//
//	if (p1 == p2) {
//		cout << "p1和p2是相等的" << endl;
//	}else
//		cout<< "p1和p2是不相等的" << endl;
//
//	if (p1 != p2) {
//		cout << "p1和p2是不相等的" << endl;
//	}
//	else
//		cout << "p1和p2是相等的" << endl;
//
//	cout << "Hello World!" << endl;
//	system("pause");
//	return 0;
//}
//
