#include <iostream>
#include <string>

using namespace std;

/*
//�����ǳ����
class Person{
public:
	
	Person() {
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}

	Person(int age,int height) {
		this->age = age;
		this->height = new int(height);
		cout << "Person���вι��캯������" << endl;
	}
	~Person() {
		if (height != NULL) {
			delete height;
			height = NULL;
		}
		
		cout << "Person��������������" << endl;
	}

	//�Լ�����Ŀ������캯��
	Person(const Person  &p) {
		cout << "�Լ�����Ŀ������캯��" << endl;
		this->age = p.age;
		//this->height = p.height;  ֱ�ӵĸ�ֵ���� ��Ϊǳ���� ���������⣺ �������ڴ��ظ��ͷ�
		this->height = new int(*p.height); //�ڶ��������ڴ� ���
	}

	int age;
	int *height;
};

void test1() {
	Person p1(18,160);
	cout << "P1������Ϊ�� " << p1.age<<endl;
	cout << "P1�����Ϊ�� " << *p1.height << endl;

	Person p2(p1);
	cout << "P2������Ϊ�� " << p2.age << endl;
	cout << "P2�����Ϊ�� " << *p2.height << endl;
}

int main()
{
	test1();


	cout << "Hello World!" << endl;
	return 0;
}
*/