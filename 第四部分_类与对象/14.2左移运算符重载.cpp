//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Person {
//	friend ostream& operator<<(ostream &cout, Person p);
//public:
//	Person(int a, int b) {
//		this->a = a;
//		this->b = b;
//	}
//
//private:
//	int a;
//	int b;
//
//	//���ó�Ա�������� ���������
//	//��Ա��������������������У���ΪcoutҪ�����
//	//void operator<<(cout) {   //p<<cout
//
//	//}
//};
//
////ֻ������ȫ�ֺ���������������� ��ʵ����ʽ����
//ostream& operator<<(ostream &cout, Person p) {
//	cout << "a = " << p.a ;
//	cout << " b = " << p.b ;
//	return cout;
//}
//
//int main()
//{
//	Person p(10,10);
//
//
//	cout << p << endl;
//
//
//	/*cout << "Hello World!" << endl;*/
//	system("pause");
//	return 0;
//}
//
