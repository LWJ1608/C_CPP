#include<iostream>
using namespace std;
//CPU��
class CPU
{
public:
	//����ļ��㺯��
	virtual void calculate() = 0;
};
class VideoCard
{
public:
	//�������ʾ����
	virtual void display() = 0;
};
//�����ڴ�����
class Memory
{
public:
	//����Ĵ洢����
	virtual void storage() = 0;
};
//������
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
	//�ṩ�������� �ͷ�3���������
	~Computer()
	{

		//�ͷ�CPU���
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}

		//�ͷ��Կ����
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}

		//�ͷ��ڴ������
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	CPU* m_cpu; //CPU�����ָ��
	VideoCard* m_vc; //�Կ����ָ��
	Memory* m_mem; //�ڴ������ָ��
};
//���峧��
//Intel����
class IntelCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Intel��CPU��ʼ�����ˣ�" << endl;
	}
};

class IntelVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel���Կ���ʼ��ʾ�ˣ�" << endl;
	}
};

class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel���ڴ�����ʼ�洢�ˣ�" << endl;
	}
};

//Lenovo����
class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo��CPU��ʼ�����ˣ�" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo���Կ���ʼ��ʾ�ˣ�" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo���ڴ�����ʼ�洢�ˣ�" << endl;
	}
};
void test01()
{
	//1+2+3+4=5  new�����Ŀռ䷵�صĵ���һ��ָ�룬����5��������new���ٵĿռ�����ֱ�Ӵ���
	//��һ̨�������(��һ��д��)
	CPU* intelCpu = new IntelCPU;//1
	VideoCard* intelCard = new IntelVideoCard;//2
	Memory* intelMem = new IntelMemory;//3
	//��һ̨������װ
	Computer* computer1 = new Computer(intelCpu, intelCard, intelMem);//4
	cout << "��һ̨���Կ�ʼ����" << endl;
	computer1->work();
	cout << "---------------------------------" << endl;
	cout << "�ڶ�̨���Կ�ʼ������" << endl;
	//�ڶ�̨������װ���ڶ���д����
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