//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
////��ϵ���������
//
//class Person {
//public:
//	Person(string name, int age) {
//		this->name = name;
//		this->age = age;
//	}
//	//��ϵ�����==����
//	bool operator==(Person &p) {
//		if (this->age == p.age && this->name == p.name) {
//			return true;
//		}
//		else
//			return false;
//	}
//
//	//��ϵ�����!=����
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
//		cout << "p1��p2����ȵ�" << endl;
//	}else
//		cout<< "p1��p2�ǲ���ȵ�" << endl;
//
//	if (p1 != p2) {
//		cout << "p1��p2�ǲ���ȵ�" << endl;
//	}
//	else
//		cout << "p1��p2����ȵ�" << endl;
//
//	cout << "Hello World!" << endl;
//	system("pause");
//	return 0;
//}
//
