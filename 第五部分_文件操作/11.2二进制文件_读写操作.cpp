//
//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
////二进制文件--读写文件
//
//class Person {
//public:
//	string name;
//	int age;
//
//};
//
////void test01() {
////	//1.包含头文件
////
////	//2.创建流对象
////	ofstream ofs;
////
////	//3.打开文件
////	ofs.open("person.txt", ios::out|ios::binary);
////
////	//4.写文件
////	Person p;
////	p.name = "xyh";
////	p.age = 18;
////	ofs.write((const char*)&p, sizeof(Person));
////
////	//5.关闭文件
////	ofs.close();
////}
//
//void test02() {
//	//2.创建流对象
//	ifstream ifs;
//
//	//3.打开文件并判断文件是否打开成功
//	ifs.open("person.txt", ios::in | ios::binary);
//	if (ifs.is_open()) {
//		cout << "打开二进制文件成功" << endl;
//	}
//	else {
//		cout << "二进制文件打开失败" << endl;
//		return;
//	}
//	Person p;
//	//4.读文件
//	ifs.read((char *)&p, sizeof(Person));
//	cout << p.name << endl;
//	cout << p.age << endl;
//
//	//5.关闭文件
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
