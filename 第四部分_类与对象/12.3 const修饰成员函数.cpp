#include <iostream>
#include <string>

using namespace std;

/*
class Person {
public:

	//this指针的本质 是指针常量  指针的指向是不可以更改的
	//后面加上const 表示 const Person * const this;
	//在成员函数后面加const， 修饰的是this指针， 让指针指向的值也不可以更改

	void showAge()const {  //常函数
		this->number = 100;
	}

	void showNumber() {
		this->number = 100;
	}

	int age;
	mutable int number; //关键字mutable
};


int main()
{
	const Person p; //常对象
	p.showAge();
	p.showNumber();
	p.number = 10;
	p.age = 10;


	cout << "Hello World!" << endl;
	return 0;
}
*/