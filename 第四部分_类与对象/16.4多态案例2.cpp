//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
////������Ʒ�Ĵ�������Ϊ�� ��ˮ - ���� - ���뱭��- ��������
////���ö�̬����ʵ�ִ˰������ṩ����������Ʒ���࣬�ṩ�����������ȺͲ�Ҷ
//
//class AbstractDrink {
//public:
//	//��ˮ
//	virtual void Boil() = 0;
//
//	//����
//	virtual void Brew() = 0;
//
//	//���뱭��
//	virtual void PourInCup() = 0;
//
//	//��������
//	virtual void PutSomeThing() = 0;
//
//	//������Ʒ
//	void MakeDrink() {
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomeThing();
//	}
//};
//
////��������
//class Cafe :public AbstractDrink {
//public:
//	//��ˮ
//	void Boil() {
//		cout << "�󿧷�ˮ" << endl;
//	}
//
//	//����
//	void Brew() {
//		cout << "���ݿ���" << endl;
//	}
//
//	//���뱭��
//	void PourInCup() {
//		cout << "���뿧�ȱ���" << endl;
//	}
//
//	//��������
//	void PutSomeThing() {
//		cout << "�����Ǻ�ţ��" << endl;
//	}
//
//};
//
////������Ҷ
//class Tea :public AbstractDrink {
//public:
//	//��ˮ
//	void Boil() {
//		cout << "���Ҷˮ" << endl;
//	}
//
//	//����
//	void Brew() {
//		cout << "���ݲ�Ҷ" << endl;
//	}
//
//	//���뱭��
//	void PourInCup() {
//		cout << "�����Ҷ����" << endl;
//	}
//
//	//��������
//	void PutSomeThing() {
//		cout << "�������" << endl;
//	}
//};
//
//void doWork(AbstractDrink &abs) {  //AbstractDrink *abs ��Ӧ���õ���  AbstractDrink *abs = new Cafe; ����Ҫ��new����  ͬʱdelete
//	abs.MakeDrink();
//}
//
//void test01() {
//
//	//��������
//	Cafe c1;
//	doWork(c1);
//	cout << "----------" << endl;
//	//������Ҷ
//	Tea t1;
//	doWork(t1);
//
//}
//
//
//int main()
//{
//	test01();
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
