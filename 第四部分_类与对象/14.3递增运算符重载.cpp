//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
////重载递增运算符
//
////自定义类型
//class MyInteger {
//	friend ostream& operator<<(ostream &cout, MyInteger m);
//public:
//	MyInteger() {
//		myNum = 0;
//	}
//
//	//重载前置++运算符  返回引用是为了一直对一个数据进行操作
//	MyInteger& operator++() {
//		myNum++;
//		return *this;
//	}
//
//	//重载后置++运算符
//	MyInteger operator++(int) {   //int代表占位参数，可以用于区分前置和后置递增
//		//1. 先记录当时结果
//		MyInteger temp = *this;
//
//		//2.后递增
//		this->myNum++;
//
//		//3.最后将记录结果做返回
//		return temp;
//
//	}
//
//private:
//	int myNum;
//};
//
////利用全局函数重载左移运算符 并实现链式调用
//ostream& operator<<(ostream &cout, MyInteger m) {
//	cout << "myNum = " << m.myNum ;
//	
//	return cout;
//}
//
//int main()
//{
//
//	/*MyInteger m;
//	cout << ++(++m) << endl;
//	cout << m << endl;*/
//
//	MyInteger m1;
//	cout << m1++ << endl;
//	cout << m1 << endl;
//
//	cout << "Hello World!" << endl;
//	system("pause");
//	return 0;
//}
//
