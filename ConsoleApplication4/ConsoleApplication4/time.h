#include "iostream"
using namespace std;
//void show(Time* p);
class Time
{
//private:
	int hour, minute, sec;

	int ss = 6;
	
	
public:
	
	void set_time();
	void show_time();
	Time()
	{
		hour = minute = sec = 0;
		cout << "You have created a new object" << endl;
	}
	Time(Time& t)
	{
		hour = 33;
		minute = t.minute;
		sec = t.sec;
		cout << "已调用拷贝构造函数" << endl;
		getchar();
	}
	friend void show(Time* p);
	static Time* init()
	{
		Time* p;
		p=new Time;
		return(p);
	}
	~Time()
	{
		cout << "You have deleted an object"<<endl;
	}
};

void Time::set_time()
{
	//cin >> hour >> minute >> sec;
}

void Time::show_time()
{
	cout << hour << ":" << minute << ":" << sec << endl;
}

void show(Time* p)
{
	cout << "ss is " << p->ss << endl;
}


class A :public Time
{
	int x;
};