#include<iostream>
#include <string>
#include "head.h"

/*
using namespace std;

struct heros {
	//姓名
	string name;
	//年龄
	int age;
	//性别
	string sex;
};

void Bubblesort(heros *arr, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (arr[j].age < arr[j + 1].age) {
				int temp = arr[j].age;
				arr[j].age = arr[j + 1].age;
				arr[j + 1].age = temp;
			}
		}
	}
}

int main() {
	//给英雄属性赋值
	heros hero[5] = {
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};

	for (int i = 0; i < 5; i++) {
		cout << hero[i].name << " " << hero[i].age << " " << hero[i].sex << endl;
	}

	cout << "-------------------" << endl;
	//按照英雄年龄进行冒泡排序
	Bubblesort(hero, 5);

	for (int i = 0; i < 5; i++) {
		cout << hero[i].name << " " << hero[i].age << " " << hero[i].sex << endl;
	}

	system("pause");
	return 0;
}
*/