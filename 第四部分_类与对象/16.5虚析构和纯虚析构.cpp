//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
////��̬  �麯�� virtual
////������
//class Animal {
//public:
//	Animal() {
//		cout << "Animal�Ĺ��캯������" << endl;
//	}
//	//���麯��
//	virtual void speak() = 0;
//
//	//�������������Խ������ָ���ͷ��������ʱ���ɾ�������
//	virtual ~Animal() {
//		cout << "Animal��������������" << endl;
//	}
//};
//
////è��
//class Cat :public Animal {
//public:
//	Cat(string name) {
//		cout << "Cat�Ĺ��캯������" << endl;
//		this->name = new string(name);
//	}
//
//	void speak() {
//		cout << *name << "Сè��˵��" << endl;
//	}
//	string *name;
//
//	~Cat() {
//		cout << "Cat��������������" << endl;
//		delete name;
//	}
//};
//
////����
//class Dog :public Animal {
//public:
//	void speak() {
//		cout << "С����˵��" << endl;
//	}
//
//};
//
//void test01() {
//	Animal *animal = new Cat("Tom");
//	animal->speak();
//	//�����ָ�����ͷ�ʱ  ������������е��������� ������������ж�������  �����ڴ�й¶
//	delete animal;
//}
//
//int main()
//{
//	test01();
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
