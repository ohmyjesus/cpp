/*
#include <iostream>
#include <string>
#include "head.h"
using namespace std;


//点和圆关系案例

void isInCircle(Circle c, Point p) {
	//计算两点之间距离的平方
	int distance = (c.getM_center().getX() - p.getX()) * (c.getM_center().getX() - p.getX()) + (c.getM_center().getY() - p.getY()) * (c.getM_center().getY() - p.getY());
	int R = c.getR() * c.getR();
	if (distance > R) {
		cout<<"点在圆外"<<endl;
	}
	else if(distance == R){
		cout << "点在圆上" << endl;
	}
	else {
		cout << "点在圆内" << endl;
	}

}

int main() {
	//创建圆
	Circle c1;
	c1.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c1.setM_center(center);

	//创建点
	Point p;
	p.setX(10);
	p.setY(10);

	isInCircle(c1, p);
	cout << "hello world" << endl;
	return 0;
}
*/