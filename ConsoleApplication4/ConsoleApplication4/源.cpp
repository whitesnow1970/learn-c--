#include "iostream"
#include "time.h"


int main()
{
	Time* p;
	p=Time::init();
	p->set_time();
	Time t2;              //�ڴ˸�ֵ�Ż���ÿ������캯����ֻ���ڶ���ʱ���ù��캯��
	t2 = *p;            //�ƺ����⸳ֵ��ʱ�򲻻���ÿ������캯��
	p->show_time();

	//Time();
	getchar();

	//Time *p1 = &t1;
	//p1->~Time();
	p->~Time();

	delete(p);
	getchar();
	cout << "Time�Ĵ�С��" << sizeof(Time) << endl << "int�Ĵ�С��" << sizeof(int) << endl << "A�Ĵ�С��" << sizeof(A) << endl;
	getchar();
	return 0;
}

