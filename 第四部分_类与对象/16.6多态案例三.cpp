//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
////��̬������ ������װ
////����CPU����
//class CPU {
//public:
//	virtual void calculate() = 0;
//};
////�����Կ�����
//class VideoCard {
//public:
//	virtual void display() = 0;
//};
//
////�����ڴ溯��
//class Memory {
//public:
//	virtual void storage() = 0;
//};
//
////������
//class Computer {
//public:
//	//���캯���д����������ָ��
//	Computer(CPU *cpu,VideoCard *vc,Memory *mem) {
//		this->cpu = cpu;
//		this->vc = vc;
//		this->mem = mem;
//	}
//	//�ṩ�����ĺ���
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
//	CPU *cpu; //CPU�����ָ��
//	VideoCard *vc;//�Կ������ָ��
//	Memory *mem;//�ڴ�����ָ��
//
//};
////�������Inter����
//class InterCpu :public CPU {
//public:
//	void calculate() {
//		cout << "Inter��CPU��ʼ����" << endl;
//	}
//};
//class InterVideoCard :public VideoCard {
//public:
//	void display() {
//		cout << "Inter���Կ���ʼ��ʾ" << endl;
//	}
//};
//class InterMemory :public Memory {
//public:
//	void storage() {
//		cout << "Inter���ڴ濪ʼ�洢" << endl;
//	}
//};
//
////�������Lenovo����
//class LenovoCpu :public CPU {
//public:
//	void calculate() {
//		cout << "Lenovo��CPU��ʼ����" << endl;
//	}
//};
//class LenovoVideoCard :public VideoCard {
//public:
//	void display() {
//		cout << "Lenovo���Կ���ʼ��ʾ" << endl;
//	}
//};
//class LenovoMemory :public Memory {
//public:
//	void storage() {
//		cout << "Lenovo���ڴ濪ʼ�洢" << endl;
//	}
//};
//
//void test01() {
//	cout << "��һ̨���ԵĿ�ʼ����" << endl;
//	//��һ̨�������
//	CPU *intercpu = new InterCpu;
//	VideoCard *vc = new InterVideoCard;
//	Memory *mem = new InterMemory;
//
//	//��װ��һ̨����
//	Computer *c = new Computer(intercpu, vc, mem);
//	c->doWork();
//	delete c;
//
//	cout << "----------" << endl;
//	cout << "�ڶ�̨���ԵĿ�ʼ����" << endl;
//	//��װ�ڶ�̨����
//	Computer c1(new LenovoCpu,new LenovoVideoCard,new LenovoMemory);
//	c1.doWork();
//
//	cout << "----------" << endl;
//	cout << "����̨���ԵĿ�ʼ����" << endl;
//	//��װ����̨����
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
