//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
////��ֵ���������
//class Person {
//public:
//	Person(int age) {
//		Age = new int(age); //���������ڴ�
//	}
//
//	int *Age;
//
//	~Person() {
//		delete Age;  //�ͷ�new�������ڴ�  ǳ��������������ڴ��ظ��ͷ�
//	}
//
//	//���� ��ֵ�����   ��ʽ˼��
//	Person& operator=(Person &p) {
//		//�������ṩ����ǳ����
//		//Age = p.Age;
//		
//		//Ӧ�����ж��Ƿ��������ڶ���������У����ͷŸɾ���Ȼ�������
//		if (this->Age != NULL) {
//			delete Age;
//			Age = NULL;
//		}
//
//		//���
//		this->Age = new int(*p.Age);
//
//		//���ض�����
//		return *this;
//	}
//
//};
//int main()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//	p3 = p2 = p1;
//
//	cout << *p1.Age << endl;
//	cout << *p2.Age << endl;
//	cout << *p3.Age << endl;
//
//
//	cout << "Hello World!" << endl;
//	system("pause");
//	return 0;
//}
//
