//#include <iostream>
//#include <string>
//
//using namespace std;
//
////分别利用普通的写法和多态的写法实现计算器
////普通写法
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
////多态实现计算器
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
////加法计算器类
//class AddCalculator :public AbstractCalculator {
//public:
//	int getResult() {
//		return number1 + number2;
//	}
//};
//
////减法计算器类
//class SubCalculator :public AbstractCalculator {
//public:
//	int getResult() {
//		return number1 - number2;
//	}
//};
//
////乘法计算器类
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
//	//多态使用条件
//	//父类指针或者引用指向子类对象
//	//加法运算  
//	AbstractCalculator *abc = new AddCalculator;
//	abc->number1 = 10;
//	abc->number2 = 10;
//	cout << abc->getResult()<<endl;
//	//销毁指针所指向的堆区空间
//	delete abc;
//
//	//减法运算
//	abc = new SubCalculator;
//	abc->number1 = 10;
//	abc->number2 = 10;
//	cout << abc->getResult() << endl;
//	delete abc;
//
//	//乘法运算.
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
