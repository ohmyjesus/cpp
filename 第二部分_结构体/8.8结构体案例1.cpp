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
	//ѧ������
	student sArray[5];
	string name;
};

void allocateSpace(teacher s[], int len) { //�β����ֽ��շ�ʽ��  ָ����պ�������� teacher *p ; teacher p[] ;
	string nameSeed = "ABCDE";
	//����ʦ��ֵ
	for (int i = 0; i < len; i++) {
		s[i].name = "teacher_";
		s[i].name += nameSeed[i];

		//ͨ��ѭ����ÿ����ʦ����ѧ����ֵ
		for (int j = 0; j < 5; j++) {
			s[i].sArray[j].name = "student_";
			s[i].sArray[j].name += nameSeed[j];
			s[i].sArray[j].score = 60;
			s[i].sArray[j].age = 18;
		}
		
	}
}

//��ӡ������Ϣ
void printfInfo(teacher tArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "��ʦ������ "<<tArray[i].name << endl;
		for (int j = 0; j < 5; j++) {
			cout << "ѧ�������� "<<tArray[i].sArray[j].name <<" ѧ�����䣺 "<< tArray[i].sArray[j].age << " ѧ���÷֣� " << tArray[i].sArray[j].score << " " << endl;
			
		}
		
	}

}

int main() {
	//1.����3����ʦ������
	teacher tArray[3];

	tArray[0].sArray[0].name = "xyh";
	//2.ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	cout << tArray[0].sArray[0].name << endl;
	//3.��ӡ������ʦ��������ѧ����Ϣ
	//printfInfo(tArray, len);

	system("pause");
	return 0;
}
*/