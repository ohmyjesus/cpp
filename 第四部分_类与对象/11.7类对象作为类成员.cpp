#include <iostream>
#include <string>

using namespace std;

/*
//当其他类的对象作为本类的成员，即先构造其他类，再构造自身，析构时，先析构自身，再析构其他类，   即其他类活的最久

//手机类
class Phone {
public:
	//构造函数
	Phone(string pName): m_Pname(pName){
		cout << "1" << endl;
	}
	//手机品牌
	string m_Pname;
	~Phone() {
		cout << "3" << endl;
	}
};

//人类
class Person {
public:

	//构造函数
	Person(string name, string pName):m_Name(name), m_Phone(pName) {
		cout << "2" << endl;
	}
	//姓名
	string m_Name;
	//手机
	Phone m_Phone;

	~Person() {
		cout << "4" << endl;
	}
};

void test01() {
	Person p("张三", "iphone");

	cout << p.m_Name << p.m_Phone.m_Pname << endl;

}
int main()
{
	 
	test01();


	cout << "Hello World!" << endl;
	return 0;
}
*/