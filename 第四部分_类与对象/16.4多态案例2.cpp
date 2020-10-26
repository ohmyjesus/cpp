//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
////制作饮品的大致流程为： 煮水 - 冲泡 - 倒入杯中- 加入佐料
////利用多态技术实现此案例，提供抽象制作饮品基类，提供子类制作咖啡和茶叶
//
//class AbstractDrink {
//public:
//	//煮水
//	virtual void Boil() = 0;
//
//	//冲泡
//	virtual void Brew() = 0;
//
//	//倒入杯中
//	virtual void PourInCup() = 0;
//
//	//加入佐料
//	virtual void PutSomeThing() = 0;
//
//	//制作饮品
//	void MakeDrink() {
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomeThing();
//	}
//};
//
////制作咖啡
//class Cafe :public AbstractDrink {
//public:
//	//煮水
//	void Boil() {
//		cout << "煮咖啡水" << endl;
//	}
//
//	//冲泡
//	void Brew() {
//		cout << "冲泡咖啡" << endl;
//	}
//
//	//倒入杯中
//	void PourInCup() {
//		cout << "倒入咖啡杯中" << endl;
//	}
//
//	//加入佐料
//	void PutSomeThing() {
//		cout << "加入糖和牛奶" << endl;
//	}
//
//};
//
////制作茶叶
//class Tea :public AbstractDrink {
//public:
//	//煮水
//	void Boil() {
//		cout << "煮茶叶水" << endl;
//	}
//
//	//冲泡
//	void Brew() {
//		cout << "冲泡茶叶" << endl;
//	}
//
//	//倒入杯中
//	void PourInCup() {
//		cout << "倒入茶叶杯中" << endl;
//	}
//
//	//加入佐料
//	void PutSomeThing() {
//		cout << "加入枸杞" << endl;
//	}
//};
//
//void doWork(AbstractDrink &abs) {  //AbstractDrink *abs 对应调用的是  AbstractDrink *abs = new Cafe; 则需要用new开辟  同时delete
//	abs.MakeDrink();
//}
//
//void test01() {
//
//	//制作咖啡
//	Cafe c1;
//	doWork(c1);
//	cout << "----------" << endl;
//	//制作茶叶
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
