//#include <iostream>
//#include <string>
//
//using namespace std;
//
////�ֱ�������ͨ��д���Ͷ�̬��д��ʵ�ּ�����
////��ͨд��
//class Calculator {
//public:
//	int num1;
//	int num2;
//
//	int getResult(char oper) {
//		if (oper == '+') {
//			return num1 + num2;
//		}
//		else if (oper == '-') {
//			return num1 - num2;
//		}
//		else if (oper == '*') {
//			return num1 * num2;
//		}
//	}
//
//};
////��̬ʵ�ּ�����
//class AbstractCalculator {
//public:
//	int number1;
//	int number2;
//
//	virtual int getResult() {
//		return 0;
//	}
//
//};
////�ӷ���������
//class AddCalculator :public AbstractCalculator {
//public:
//	int getResult() {
//		return number1 + number2;
//	}
//};
//
////������������
//class SubCalculator :public AbstractCalculator {
//public:
//	int getResult() {
//		return number1 - number2;
//	}
//};
//
////�˷���������
//class MulCalculator :public AbstractCalculator {
//public:
//	int getResult() {
//		return number1 * number2;
//	}
//};
//int main()
//{
//	//Calculator c1;
//	//c1.num1 = 10;
//	//c1.num2 = 10;
//	//cout << c1.num1 << '+' << c1.num2 << "=" << c1.getResult('+')<<endl;
//	//cout << c1.num1 << "-" << c1.num2 << "=" << c1.getResult('-')<<endl;
//	//cout << c1.num1 << "*" << c1.num2 << "=" << c1.getResult('*') << endl;
//
//	//��̬ʹ������
//	//����ָ���������ָ���������
//	//�ӷ�����  
//	AbstractCalculator *abc = new AddCalculator;
//	abc->number1 = 10;
//	abc->number2 = 10;
//	cout << abc->getResult()<<endl;
//	//����ָ����ָ��Ķ����ռ�
//	delete abc;
//
//	//��������
//	abc = new SubCalculator;
//	abc->number1 = 10;
//	abc->number2 = 10;
//	cout << abc->getResult() << endl;
//	delete abc;
//
//	//�˷�����.
//	abc = new MulCalculator;
//	abc->number1 = 10;
//	abc->number2 = 10;
//	cout << abc->getResult() << endl;
//	delete abc;
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
