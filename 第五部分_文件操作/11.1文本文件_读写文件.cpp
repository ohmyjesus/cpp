//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
////写文件
////void test01() {
////	ofstream ofs;
////	ofs.open("test.txt", ios::out);
////	ofs << "Hello World" << endl;
////	ofs.close();
////}
//
////读文件
//void test02() {
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//	if (ifs.is_open()) {
//		cout << "文件打开成功" << endl;
//	}
//	else {
//		cout << "文件打开失败" << endl;
//		return ;
//	}
//	//读数据 第一种
//	/*char buf[1024] = { 0 };
//	while (ifs >> buf) {
//		cout << buf << endl;
//	}
//	ifs.close();*/
//
//	//读数据 第二种
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf,sizeof(buf)))
//	{
//		cout << buf << endl;
//	}*/
//
//	//读数据 第三种
//	string buf;
//	while (getline(ifs,buf))
//	{
//		cout << buf << endl;
//	}
//
//	//读数据 第四种
//	//char c;
//	//while ((c = ifs.get()) != EOF)   //EOF  end of file  不推荐第四种方式
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
