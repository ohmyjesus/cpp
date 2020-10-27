
#include <iostream>
#include <string>

using namespace std;

//提前让编译器知道Person类的存在

template<class T1, class T2>
class Person;


//类外实现
template<class T1, class T2>
void printPerson2(Person<T1, T2> p) {
	cout << "类外实现" << p.name << " " << p.age << endl;
}

template<class T1,class T2>
class Person {
	//全局函数类内实现
	friend void printPerson(Person<T1, T2> p) {
		cout << p.name << " " << p.age << endl;
	}

	//全局函数 类外实现
	//加空模板参数列表
	friend void printPerson2<>(Person<T1, T2> p);

public:
	Person(T1 name, T2 age) {
		this->name = name;
		this->age = age;
	}


private:
	T1 name;
	T2 age;
};

int main()
{
	Person<string,int>p("xyh", 18);
	printPerson(p);
	printPerson2(p);

	cout << "Hello World!" << endl;
	return 0;
}

