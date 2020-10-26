#include <iostream>
#include <string>

using namespace std;
//类做友元

/*
//建筑物类
class Building {
	friend class GoodGay;
public:
	string sittingRoom;

	Building();
private:
	string bedRoom;
};

//类外写成员函数
Building::Building() {
	sittingRoom = "客厅";
	bedRoom = "卧室";
}
//好基友类
class GoodGay {
public:
	GoodGay();
	Building *building;

	void visit();  //参观函数访问Building的属性
};

GoodGay::GoodGay() {
	//创建建筑物对象
	building = new Building;
}

void GoodGay::visit() {
	cout << "好基友类正在访问： " << building->sittingRoom << endl;

	cout << "好基友类正在访问： " << building->bedRoom << endl;
}

int main() {
	GoodGay g1;
	g1.visit();
	

	cout << "Hello World!" << endl;
	return 0;
}
*/