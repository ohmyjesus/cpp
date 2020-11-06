//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//
//void test01() {
//	vector<int>v;
//	for (int i = 0; i < 100000; i++) {
//		v.push_back(i);
//	}
//	cout << v.capacity() << endl;
//	cout << v.size() << endl;
//
//	v.resize(3);
//	cout << v.capacity() << endl;
//	cout << v.size() << endl;
//
//	//实际用途
//	//巧用swap收缩内存
//	vector<int>(v).swap(v);
//	cout << v.capacity() << endl;
//	cout << v.size() << endl;	//此时容量等于大小
//}
//
//void test02() {
//	vector<int>v1;
//	for (int i = 0; i < 100; i++) {
//		v1.push_back(i);
//	}
//	cout << v1.capacity() << endl;
//	cout << v1.size() << endl;
//
//	vector<int>v2;
//	for (int i = 0; i < 200; i++) {
//		v2.push_back(i);
//	}
//	cout << v2.capacity() << endl;
//	cout << v2.size() << endl;
//
//	v1.swap(v2);
//	cout << v1.capacity() << endl;
//	cout << v1.size() << endl;
//	cout << v2.capacity() << endl;
//	cout << v2.size() << endl;
//}
//
//int main()
//{
//	test02();
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
