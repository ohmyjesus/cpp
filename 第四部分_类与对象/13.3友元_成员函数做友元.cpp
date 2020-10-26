//#include <iostream>
//#include <string>
//
//using namespace std;
////成员函数做友元
//
//class Building;
//
//class GoodGay {
//private:
//	Building *building;
//public:
//	GoodGay();
//
//	void visit();  //让visit可以访问Building中的私有成员
//	void visit2(); //让visit不可以访问Building中的私有成员
//};
//
//class Building 
//{
//private:
//	string bedRoom;
//public:
//	string sittingRoom;
//	Building();
//	friend void GoodGay::visit();
//};
//
//
//
//Building::Building() {
//	sittingRoom = "客厅";
//	bedRoom = "卧室";
//}
//
//GoodGay::GoodGay() {
//	building = new Building();
//}
//
//void GoodGay::visit() {
//	cout << "好基友类正在访问： " << building->sittingRoom << endl;
//
//	cout << "好基友类正在访问： " << building->bedRoom << endl;
//}
//
//void GoodGay::visit2() {
//	cout << "好基友类正在访问： " << building->sittingRoom << endl;
//
//	//cout << "好基友类正在访问： " << building->bedRoom << endl;
//}
//
//int main() {
//	GoodGay g1;
//	g1.visit();
//	
//	return 0;
//}
