//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Person {
//	friend ostream& operator<<(ostream &cout, Person p);
//public:
//	Person(int a, int b) {
//		this->a = a;
//		this->b = b;
//	}
//
//private:
//	int a;
//	int b;
//
//	//利用成员函数重载 左移运算符
//	//成员函数重载左移运算符不行，因为cout要在左边
//	//void operator<<(cout) {   //p<<cout
//
//	//}
//};
//
////只能利用全局函数重载左移运算符 并实现链式调用
//ostream& operator<<(ostream &cout, Person p) {
//	cout << "a = " << p.a ;
//	cout << " b = " << p.b ;
//	return cout;
//}
//
//int main()
//{
//	Person p(10,10);
//
//
//	cout << p << endl;
//
//
//	/*cout << "Hello World!" << endl;*/
//	system("pause");
//	return 0;
//}
//
