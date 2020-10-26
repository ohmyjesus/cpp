//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
////多态  虚函数 virtual
////动物类
//class Animal {
//public:
//	Animal() {
//		cout << "Animal的构造函数调用" << endl;
//	}
//	//纯虚函数
//	virtual void speak() = 0;
//
//	//利用虚析构可以解决父类指针释放子类对象时不干净的问题
//	virtual ~Animal() {
//		cout << "Animal的析构函数调用" << endl;
//	}
//};
//
////猫类
//class Cat :public Animal {
//public:
//	Cat(string name) {
//		cout << "Cat的构造函数调用" << endl;
//		this->name = new string(name);
//	}
//
//	void speak() {
//		cout << *name << "小猫在说话" << endl;
//	}
//	string *name;
//
//	~Cat() {
//		cout << "Cat的析构函数调用" << endl;
//		delete name;
//	}
//};
//
////狗类
//class Dog :public Animal {
//public:
//	void speak() {
//		cout << "小狗在说话" << endl;
//	}
//
//};
//
//void test01() {
//	Animal *animal = new Cat("Tom");
//	animal->speak();
//	//父类的指针在释放时  不会调用子类中的析构函数 导致子类如果有堆区属性  出现内存泄露
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
