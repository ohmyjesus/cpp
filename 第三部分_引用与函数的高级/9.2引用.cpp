/*
#include <iostream>
#include <string>

using namespace std;


//��������

//1.ֵ����
void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

//2.��ַ����
void swap2(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3.���ô���
void swap3(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}


int main() {

	
	int a = 10;
	int b = 20;
	
	//1. ���ñ����ʼ��
	//int &c;

	//2.�����ڳ�ʼ���󣬾Ͳ����Է����ı�
	int c = 20;
	b = c;
	//swap1(a, b);
	//cout << a << " " << b << endl;
	//cout << endl;

	//swap2(&a, &b);
	//cout << a << " " << b << endl;
	//cout << endl;

	swap3(a, b);
	cout << a << " " << b << endl;
	cout << endl;

	cout << "hello world" << endl;
	system("pause");
	return 0;
}
*/