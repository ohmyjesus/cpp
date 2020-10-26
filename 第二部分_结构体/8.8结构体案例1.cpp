#include<iostream>
#include <string>

/*
using namespace std;

struct student {
	string name;
	int age;
	int score;
};

struct teacher {
	//学生数组
	student sArray[5];
	string name;
};

void allocateSpace(teacher s[], int len) { //形参两种接收方式：  指针接收和数组接收 teacher *p ; teacher p[] ;
	string nameSeed = "ABCDE";
	//给老师赋值
	for (int i = 0; i < len; i++) {
		s[i].name = "teacher_";
		s[i].name += nameSeed[i];

		//通过循环给每名老师带的学生赋值
		for (int j = 0; j < 5; j++) {
			s[i].sArray[j].name = "student_";
			s[i].sArray[j].name += nameSeed[j];
			s[i].sArray[j].score = 60;
			s[i].sArray[j].age = 18;
		}
		
	}
}

//打印所有信息
void printfInfo(teacher tArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "老师姓名： "<<tArray[i].name << endl;
		for (int j = 0; j < 5; j++) {
			cout << "学生姓名： "<<tArray[i].sArray[j].name <<" 学生年龄： "<< tArray[i].sArray[j].age << " 学生得分： " << tArray[i].sArray[j].score << " " << endl;
			
		}
		
	}

}

int main() {
	//1.创建3名老师的数组
	teacher tArray[3];

	tArray[0].sArray[0].name = "xyh";
	//2.通过函数给3名老师的信息赋值，并给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	cout << tArray[0].sArray[0].name << endl;
	//3.打印所有老师及所带的学生信息
	//printfInfo(tArray, len);

	system("pause");
	return 0;
}
*/