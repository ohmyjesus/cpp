//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
////���ص��������
//
////�Զ�������
//class MyInteger {
//	friend ostream& operator<<(ostream &cout, MyInteger m);
//public:
//	MyInteger() {
//		myNum = 0;
//	}
//
//	//����ǰ��++�����  ����������Ϊ��һֱ��һ�����ݽ��в���
//	MyInteger& operator++() {
//		myNum++;
//		return *this;
//	}
//
//	//���غ���++�����
//	MyInteger operator++(int) {   //int����ռλ������������������ǰ�úͺ��õ���
//		//1. �ȼ�¼��ʱ���
//		MyInteger temp = *this;
//
//		//2.�����
//		this->myNum++;
//
//		//3.��󽫼�¼���������
//		return temp;
//
//	}
//
//private:
//	int myNum;
//};
//
////����ȫ�ֺ���������������� ��ʵ����ʽ����
//ostream& operator<<(ostream &cout, MyInteger m) {
//	cout << "myNum = " << m.myNum ;
//	
//	return cout;
//}
//
//int main()
//{
//
//	/*MyInteger m;
//	cout << ++(++m) << endl;
//	cout << m << endl;*/
//
//	MyInteger m1;
//	cout << m1++ << endl;
//	cout << m1 << endl;
//
//	cout << "Hello World!" << endl;
//	system("pause");
//	return 0;
//}
//
