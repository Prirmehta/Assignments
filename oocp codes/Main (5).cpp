#include <iostream>
 
using namespace std;
 
class Time
{
public:
	Time();
	Time(int s, int m, int h);
	void Display() const;
	void Add(Time T);
private:
	int sec;
	int hours;
	int mins;
	const int INIT = 0;
};
 
Time::Time()
{
	sec = INIT;
	mins = INIT;
	hours = INIT;
}
 
Time::Time(int s, int m, int h)
{
	if (s < 0) sec = 0;
	else sec = s % 60;
	if (m < 0) m = 0;
	else mins = m % 60;
	if (h < 0) h = 0;
	else hours = h % 24;
}
 
void Time::Display() const
{
	cout << hours / 10 << hours % 10 << ":" << mins / 10 << mins % 10 << ":" << sec / 10 << sec % 10 << endl;
}
 
void Time::Add(Time T)
{
	hours = (hours + T.hours + ((sec + T.sec) / 60 + mins + T.mins) / 60) % 24;
	mins = ((sec + T.sec) / 60 + mins + T.mins) % 60;
	sec = (sec + T.sec) % 60;	
}
 
int main()
{
	Time t1;
	Time t2(225, 125, 100);
	cout << "T1 object: ";
	t1.Display();
	cout << "T2 object: ";
	t2.Display();
	t1.Add(t2);
	cout << "T1 add T2: ";
	t1.Display();
	system("pause");
	return 0;
}