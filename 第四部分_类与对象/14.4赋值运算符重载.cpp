//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
////赋值运算符重载
//class Person {
//public:
//	Person(int age) {
//		Age = new int(age); //堆区开辟内存
//	}
//
//	int *Age;
//
//	~Person() {
//		delete Age;  //释放new出来的内存  浅拷贝会带来堆区内存重复释放
//	}
//
//	//重载 赋值运算符   链式思想
//	Person& operator=(Person &p) {
//		//编译器提供的是浅拷贝
//		//Age = p.Age;
//		
//		//应该先判断是否有属性在堆区，如果有，先释放干净，然后再深拷贝
//		if (this->Age != NULL) {
//			delete Age;
//			Age = NULL;
//		}
//
//		//深拷贝
//		this->Age = new int(*p.Age);
//
//		//返回对象本身
//		return *this;
//	}
//
//};
//int main()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//	p3 = p2 = p1;
//
//	cout << *p1.Age << endl;
//	cout << *p2.Age << endl;
//	cout << *p3.Age << endl;
//
//
//	cout << "Hello World!" << endl;
//	system("pause");
//	return 0;
//}
//
