//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>  //��׼�㷨��ͷ�ļ�
//using namespace std;
//
////����Ƕ������
//void test01() {
//	vector<vector<int>>v;
//
//	//����С����
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//
//	//��С�������������
//	for (int i = 0; i < 4; i++) {
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//	}
//
//	//��С�������뵽��������
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//
//	//ͨ���������ı������������ݱ���һ��
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++) {
//		for (vector<int>::iterator it2 = (*it).begin(); it2 != (*it).end(); it2++) {
//			cout << *it2 << " " ;
//		}
//		cout << endl;
//	}
//}
//
//
//int main()
//{
//	test01();
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
