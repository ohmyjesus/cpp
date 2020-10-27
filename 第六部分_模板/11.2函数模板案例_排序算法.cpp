//
//#include <iostream>
//#include <string>
//
//using namespace std;
////实现通用 对数组进行排序的函数
////规则 从大到小
////算法 选择
////测试 char 数组， int 数组
//
////排序算法
//template<typename T>
//void mySort(T *arr, int len) {
//	for (int i = 0; i < len-1; i++) {
//		for (int j = 0; j < len - 1 - i; j++) {
//			if (arr[j+1] > arr[j]) {
//				T temp = arr[j+1];
//				arr[j+1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//
////打印数组
//template<typename T>
//void printf(T *arr, int len) {
//	for (int i = 0; i < len; i++) {
//		cout << *(arr + i) << " ";
//	}
//	cout << endl;
//}
//
//void test01() {
//	//char arr[] = "adfecb";
//	int arr[] = { 3,2,5,1,8 };
//	int len = sizeof(arr) / sizeof(int);
//	mySort(arr, len);
//	printf(arr, len);
//}
//
//int main()
//{
//	test01();
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
