/*
#include <iostream>
#include <string>
#include "head.h"
using namespace std;


//���Բ��ϵ����

void isInCircle(Circle c, Point p) {
	//��������֮������ƽ��
	int distance = (c.getM_center().getX() - p.getX()) * (c.getM_center().getX() - p.getX()) + (c.getM_center().getY() - p.getY()) * (c.getM_center().getY() - p.getY());
	int R = c.getR() * c.getR();
	if (distance > R) {
		cout<<"����Բ��"<<endl;
	}
	else if(distance == R){
		cout << "����Բ��" << endl;
	}
	else {
		cout << "����Բ��" << endl;
	}

}

int main() {
	//����Բ
	Circle c1;
	c1.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c1.setM_center(center);

	//������
	Point p;
	p.setX(10);
	p.setY(10);

	isInCircle(c1, p);
	cout << "hello world" << endl;
	return 0;
}
*/