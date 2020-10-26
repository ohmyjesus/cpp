//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
////多态案例三 电脑组装
////抽象CPU函数
//class CPU {
//public:
//	virtual void calculate() = 0;
//};
////抽象显卡函数
//class VideoCard {
//public:
//	virtual void display() = 0;
//};
//
////抽象内存函数
//class Memory {
//public:
//	virtual void storage() = 0;
//};
//
////电脑类
//class Computer {
//public:
//	//构造函数中传入三个零件指针
//	Computer(CPU *cpu,VideoCard *vc,Memory *mem) {
//		this->cpu = cpu;
//		this->vc = vc;
//		this->mem = mem;
//	}
//	//提供工作的函数
//	void doWork() {
//		cpu->calculate();
//		vc->display();
//		mem->storage();
//	}
//	virtual ~Computer() {
//		delete cpu;
//		delete vc;
//		delete mem;
//	}
//private:
//	CPU *cpu; //CPU的零件指针
//	VideoCard *vc;//显卡的零件指针
//	Memory *mem;//内存的零件指针
//
//};
////具体零件Inter厂商
//class InterCpu :public CPU {
//public:
//	void calculate() {
//		cout << "Inter的CPU开始计算" << endl;
//	}
//};
//class InterVideoCard :public VideoCard {
//public:
//	void display() {
//		cout << "Inter的显卡开始显示" << endl;
//	}
//};
//class InterMemory :public Memory {
//public:
//	void storage() {
//		cout << "Inter的内存开始存储" << endl;
//	}
//};
//
////具体零件Lenovo厂商
//class LenovoCpu :public CPU {
//public:
//	void calculate() {
//		cout << "Lenovo的CPU开始计算" << endl;
//	}
//};
//class LenovoVideoCard :public VideoCard {
//public:
//	void display() {
//		cout << "Lenovo的显卡开始显示" << endl;
//	}
//};
//class LenovoMemory :public Memory {
//public:
//	void storage() {
//		cout << "Lenovo的内存开始存储" << endl;
//	}
//};
//
//void test01() {
//	cout << "第一台电脑的开始工作" << endl;
//	//第一台电脑零件
//	CPU *intercpu = new InterCpu;
//	VideoCard *vc = new InterVideoCard;
//	Memory *mem = new InterMemory;
//
//	//组装第一台电脑
//	Computer *c = new Computer(intercpu, vc, mem);
//	c->doWork();
//	delete c;
//
//	cout << "----------" << endl;
//	cout << "第二台电脑的开始工作" << endl;
//	//组装第二台电脑
//	Computer c1(new LenovoCpu,new LenovoVideoCard,new LenovoMemory);
//	c1.doWork();
//
//	cout << "----------" << endl;
//	cout << "第三台电脑的开始工作" << endl;
//	//组装第三台电脑
//	Computer c2(new LenovoCpu, new InterVideoCard, new LenovoMemory);
//	c2.doWork();
//}
//int main()
//{
//	test01();
//
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
