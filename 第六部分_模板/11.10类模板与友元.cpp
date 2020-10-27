
#include <iostream>
#include <string>

using namespace std;

//��ǰ�ñ�����֪��Person��Ĵ���

template<class T1, class T2>
class Person;


//����ʵ��
template<class T1, class T2>
void printPerson2(Person<T1, T2> p) {
	cout << "����ʵ��" << p.name << " " << p.age << endl;
}

template<class T1,class T2>
class Person {
	//ȫ�ֺ�������ʵ��
	friend void printPerson(Person<T1, T2> p) {
		cout << p.name << " " << p.age << endl;
	}

	//ȫ�ֺ��� ����ʵ��
	//�ӿ�ģ������б�
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

