//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
////动物类
//class Animal {
//public:
//	int age;
//
//};
//
////羊类
//class Sheep :virtual public Animal {
//
//};
//
////驼类
//class Tuo :virtual public Animal {
//
//};
//
////羊驼类
//class SheepTuo :public Sheep, public Tuo {
//
//};
//
//int main()
//{
//	SheepTuo st;
//	st.Sheep::age = 18;
//	st.Tuo::age = 20;
//
//	//菱形继承时，相当于有两个父类拥有相同的成员，故需要加作用域进行区分
//	cout << st.Sheep::age << endl;
//	cout << st.Tuo::age << endl;
//	cout << st.age << endl;
//
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
