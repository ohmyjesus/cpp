//
//#include <iostream>
//#include <string>
//
//using namespace std;
////多态  虚函数 virtual
////动物类
//class Animal {
//public:
//	virtual void speak() {
//		cout << "动物在说话" << endl;
//	} 
//};
//
////猫类
//class Cat :public Animal {
//public:
//	void speak() {
//		cout << "小猫在说话" << endl;
//	}
//
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
//void doSpeak(Animal &animal) {
//	animal.speak();
//}
//
//int main()
//{
//	Cat c1;
//	doSpeak(c1);
//	Dog d1;
//	doSpeak(d1);
//
//	cout << sizeof(Animal) << endl;
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
