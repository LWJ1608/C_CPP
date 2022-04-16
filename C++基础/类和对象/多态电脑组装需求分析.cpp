#include<iostream>
using namespace std;
//CPU类
class CPU
{
public:
	//抽象的计算函数
	virtual void calculate() = 0;
};
class VideoCard
{
public:
	//抽象的显示函数
	virtual void display() = 0;
};
//抽象内存条类
class Memory
{
public:
	//抽象的存储函数
	virtual void storage() = 0;
};
//电脑类
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	//提供析构函数 释放3个电脑零件
	~Computer()
	{

		//释放CPU零件
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}

		//释放显卡零件
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}

		//释放内存条零件
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	CPU* m_cpu; //CPU的零件指针
	VideoCard* m_vc; //显卡零件指针
	Memory* m_mem; //内存条零件指针
};
//具体厂商
//Intel厂商
class IntelCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Intel的CPU开始计算了！" << endl;
	}
};

class IntelVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel的显卡开始显示了！" << endl;
	}
};

class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel的内存条开始存储了！" << endl;
	}
};

//Lenovo厂商
class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo的CPU开始计算了！" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo的显卡开始显示了！" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo的内存条开始存储了！" << endl;
	}
};
void test01()
{
	//1+2+3+4=5  new出来的空间返回的的是一个指针，所以5处可以用new开辟的空间名字直接传入
	//第一台电脑零件(第一种写法)
	CPU* intelCpu = new IntelCPU;//1
	VideoCard* intelCard = new IntelVideoCard;//2
	Memory* intelMem = new IntelMemory;//3
	//第一台电脑组装
	Computer* computer1 = new Computer(intelCpu, intelCard, intelMem);//4
	cout << "第一台电脑开始工作" << endl;
	computer1->work();
	cout << "---------------------------------" << endl;
	cout << "第二台电脑开始工作：" << endl;
	//第二台电脑组装（第二种写法）
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);//5
	computer2->work();
	delete computer2;
}
int main()
{
	test01();
	system("pause");
	return 0;
}