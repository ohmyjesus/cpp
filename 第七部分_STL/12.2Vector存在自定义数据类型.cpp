//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>  //��׼�㷨��ͷ�ļ�
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
//	//���������������
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//
//	//���������е�����
//	//�ڶ��ֱ�����ʽ  itBegin���Ǹ�ָ��
//	for (vector<Person>::iterator itBegin = v.begin(); itBegin != v.end(); itBegin++) {
//		//cout << "����: " << (*itBegin).name << "���䣺" << (*itBegin).age << endl;
//		cout << "����: " << itBegin->name << "���䣺" << itBegin->age << endl;
//	}
//}
//
//void test02() {
//	vector<Person*>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//
//	//���������������  β�巨
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//
//	//���������е�����
//	//�ڶ��ֱ�����ʽ  itBegin���Ǹ�ָ��
//	for (vector<Person*>::iterator itBegin = v.begin(); itBegin != v.end(); itBegin++) {
//		cout << "����: " << (*itBegin)->name << "���䣺" << (*itBegin)->age << endl;
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
