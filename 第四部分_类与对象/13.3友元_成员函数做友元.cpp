//#include <iostream>
//#include <string>
//
//using namespace std;
////��Ա��������Ԫ
//
//class Building;
//
//class GoodGay {
//private:
//	Building *building;
//public:
//	GoodGay();
//
//	void visit();  //��visit���Է���Building�е�˽�г�Ա
//	void visit2(); //��visit�����Է���Building�е�˽�г�Ա
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
//	sittingRoom = "����";
//	bedRoom = "����";
//}
//
//GoodGay::GoodGay() {
//	building = new Building();
//}
//
//void GoodGay::visit() {
//	cout << "�û��������ڷ��ʣ� " << building->sittingRoom << endl;
//
//	cout << "�û��������ڷ��ʣ� " << building->bedRoom << endl;
//}
//
//void GoodGay::visit2() {
//	cout << "�û��������ڷ��ʣ� " << building->sittingRoom << endl;
//
//	//cout << "�û��������ڷ��ʣ� " << building->bedRoom << endl;
//}
//
//int main() {
//	GoodGay g1;
//	g1.visit();
//	
//	return 0;
//}
