//
//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
////�������ļ�--��д�ļ�
//
//class Person {
//public:
//	string name;
//	int age;
//
//};
//
////void test01() {
////	//1.����ͷ�ļ�
////
////	//2.����������
////	ofstream ofs;
////
////	//3.���ļ�
////	ofs.open("person.txt", ios::out|ios::binary);
////
////	//4.д�ļ�
////	Person p;
////	p.name = "xyh";
////	p.age = 18;
////	ofs.write((const char*)&p, sizeof(Person));
////
////	//5.�ر��ļ�
////	ofs.close();
////}
//
//void test02() {
//	//2.����������
//	ifstream ifs;
//
//	//3.���ļ����ж��ļ��Ƿ�򿪳ɹ�
//	ifs.open("person.txt", ios::in | ios::binary);
//	if (ifs.is_open()) {
//		cout << "�򿪶������ļ��ɹ�" << endl;
//	}
//	else {
//		cout << "�������ļ���ʧ��" << endl;
//		return;
//	}
//	Person p;
//	//4.���ļ�
//	ifs.read((char *)&p, sizeof(Person));
//	cout << p.name << endl;
//	cout << p.age << endl;
//
//	//5.�ر��ļ�
//	ifs.close();
//}
//
//int main()
//{
//	test02();
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
