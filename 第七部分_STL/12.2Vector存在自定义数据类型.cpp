//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>  //标准算法的头文件
//
//using namespace std;
//
//class Person {
//public:
//	Person(string name, int age) {
//		this->name = name;
//		this->age = age;
//	}
//
//	string name;
//	int age;
//};
//
//void test01() {
//	vector<Person>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//
//	//向容器中添加数据
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//
//	//遍历容器中的数据
//	//第二种遍历方式  itBegin就是个指针
//	for (vector<Person>::iterator itBegin = v.begin(); itBegin != v.end(); itBegin++) {
//		//cout << "姓名: " << (*itBegin).name << "年龄：" << (*itBegin).age << endl;
//		cout << "姓名: " << itBegin->name << "年龄：" << itBegin->age << endl;
//	}
//}
//
//void test02() {
//	vector<Person*>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//
//	//向容器中添加数据  尾插法
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//
//	//遍历容器中的数据
//	//第二种遍历方式  itBegin就是个指针
//	for (vector<Person*>::iterator itBegin = v.begin(); itBegin != v.end(); itBegin++) {
//		cout << "姓名: " << (*itBegin)->name << "年龄：" << (*itBegin)->age << endl;
//		
//	}
//
//}
//int main()
//{
//	test02();
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
