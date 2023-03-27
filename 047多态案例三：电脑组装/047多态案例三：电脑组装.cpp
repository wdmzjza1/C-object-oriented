#include<iostream>
using namespace std;
class cpu
{
public:
	virtual void calculate() = 0;
};
class videocard
{
public:
	virtual void display() = 0;
};
class memory
{
public:
	virtual void storage() = 0;
};

class computer
{
public:
	computer(cpu* cpu, videocard* vc, memory* mem)
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
	~computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	cpu* m_cpu;
	videocard* m_vc;
	memory* m_mem;
};
class intelcpu :public cpu
{
public:
	virtual void calculate()
	{
		cout << "intel的cpu开始工作了" << endl;
	};
};
class intelvideocard :public videocard
{
public:
	virtual void display()
	{
		cout << "intel的显卡开始工作了" << endl;
	};
};
class intelmemory :public memory
{
public:
	virtual void storage()
	{
		cout << "intel的内存开始工作了" << endl;
	};
};
class lenovocpu : public cpu
{
public:
	virtual void calculate()
	{
		cout << "lenovol的cpu开始工作了" << endl;
	};
};
class lenovovideocard :public videocard
{
public:
	virtual void display()
	{
		cout << "lenovo的显卡开始工作了" << endl;
	};
};
class lenovomemory :public memory
{
public:
	virtual void storage()
	{
		cout << "lenovo的内存开始工作了" << endl;
	};
};

void test1()
{
	computer *cop1=new computer(new intelcpu, new intelvideocard, new intelmemory);
	cop1->work();
	delete cop1;
	cout << "-----------------------" << endl;
	computer* cop2 = new computer(new lenovocpu, new lenovovideocard, new lenovomemory);
	cop2->work();
	delete cop2;
	cout << "-----------------------" << endl;
	computer* cop3 = new computer(new intelcpu, new lenovovideocard, new intelmemory);
	cop3->work();
	delete cop3;

}
int main()
{
	test1();
}