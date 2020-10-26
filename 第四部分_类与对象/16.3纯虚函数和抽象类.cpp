//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
////纯虚函数和抽象类
//class Base {
//public:
//	//纯虚函数  只要有一个纯虚函数 这个类被称为抽象类
//	//1. 抽象类无法实例化对象
//	//2. 抽象类的子类必须重写父类中的纯虚函数，否则也称为抽象类
//	virtual void func() = 0;
//
//};
//
//class Son :public Base {
//public:
//	void func() {
//		cout << "子类的func调用" << endl;
//	}
//};
//
//
//int main()
//{
//	
//	Base *base = new Son;  //new出来的是指针接收
//	base->func();
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
