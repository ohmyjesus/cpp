#include <iostream>
#include <string>

using namespace std;

/*
//深拷贝与浅拷贝
class Person{
public:
	
	Person() {
		cout << "Person的默认构造函数调用" << endl;
	}

	Person(int age,int height) {
		this->age = age;
		this->height = new int(height);
		cout << "Person的有参构造函数调用" << endl;
	}
	~Person() {
		if (height != NULL) {
			delete height;
			height = NULL;
		}
		
		cout << "Person的析构函数调用" << endl;
	}

	//自己定义的拷贝构造函数
	Person(const Person  &p) {
		cout << "自己定义的拷贝构造函数" << endl;
		this->age = p.age;
		//this->height = p.height;  直接的赋值操作 即为浅拷贝 带来的问题： 堆区的内存重复释放
		this->height = new int(*p.height); //在堆区开辟内存 深拷贝
	}

	int age;
	int *height;
};

void test1() {
	Person p1(18,160);
	cout << "P1的年龄为： " << p1.age<<endl;
	cout << "P1的身高为： " << *p1.height << endl;

	Person p2(p1);
	cout << "P2的年龄为： " << p2.age << endl;
	cout << "P2的身高为： " << *p2.height << endl;
}

int main()
{
	test1();


	cout << "Hello World!" << endl;
	return 0;
}
*/