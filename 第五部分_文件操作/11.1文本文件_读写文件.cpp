//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
////д�ļ�
////void test01() {
////	ofstream ofs;
////	ofs.open("test.txt", ios::out);
////	ofs << "Hello World" << endl;
////	ofs.close();
////}
//
////���ļ�
//void test02() {
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//	if (ifs.is_open()) {
//		cout << "�ļ��򿪳ɹ�" << endl;
//	}
//	else {
//		cout << "�ļ���ʧ��" << endl;
//		return ;
//	}
//	//������ ��һ��
//	/*char buf[1024] = { 0 };
//	while (ifs >> buf) {
//		cout << buf << endl;
//	}
//	ifs.close();*/
//
//	//������ �ڶ���
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf,sizeof(buf)))
//	{
//		cout << buf << endl;
//	}*/
//
//	//������ ������
//	string buf;
//	while (getline(ifs,buf))
//	{
//		cout << buf << endl;
//	}
//
//	//������ ������
//	//char c;
//	//while ((c = ifs.get()) != EOF)   //EOF  end of file  ���Ƽ������ַ�ʽ
//	//{
//	//	cout << c;
//	//}
//
//}
//
//int main()
//{
//	test02();
//
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
