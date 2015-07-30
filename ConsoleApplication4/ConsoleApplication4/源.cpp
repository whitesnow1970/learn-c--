#include "iostream"
#include "time.h"


int main()
{
	Time* p;
	p=Time::init();
	p->set_time();
	Time t2;              //在此赋值才会调用拷贝构造函数，只有在定义时调用构造函数
	t2 = *p;            //似乎另外赋值的时候不会调用拷贝构造函数
	p->show_time();

	//Time();
	getchar();

	//Time *p1 = &t1;
	//p1->~Time();
	p->~Time();

	delete(p);
	getchar();
	cout << "Time的大小是" << sizeof(Time) << endl << "int的大小是" << sizeof(int) << endl << "A的大小是" << sizeof(A) << endl;
	getchar();
	return 0;
}

