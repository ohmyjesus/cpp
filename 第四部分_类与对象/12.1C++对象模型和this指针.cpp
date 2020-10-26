#include <iostream>
#include <string>

using namespace std;

/*
//this指针的用途
class Person {
public:
	int age;
	Person(int age) {
		this->age = age;
	}

	Person& PersonAddAge(Person p) {  //Person p不加引用则为赋值构造一份   需要加上引用
		this->age += p.age;
		return *this;
	}


};

void test01() {
	Person p1(10);
	Person p2(10);

	//链式编程思想
	p1.PersonAddAge(p2).PersonAddAge(p2);  
	
	cout << "age is: " <<p1.age<< endl;

}

int main()
{
	test01();
	


	cout << "Hello World!" << endl;
	return 0;
}
*/