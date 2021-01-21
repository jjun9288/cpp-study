#include <iostream>
using namespace std;
class Time{
	int hour;
	int minute;
	int second;
public:
	Time();
	Time(int h, int m, int s);
	void print();
};
Time::Time(){
	hour = 0;
	minute = 0;
	second = 0;
}

Time::Time(int h,int m, int s){
	hour = h;
	minute = m;
	second = s;
}
void Time::print(){
	cout << hour << "시" << minute << "분" << second << "초\n";
}

class AlarmClock{
	Time currentTime;
	Time alarmTime;
public:
	AlarmClock(Time a, Time c);
	void print();
	void changeTime(Time a);
};
AlarmClock::AlarmClock(Time a, Time c){
	currentTime = c;
	alarmTime = a;
}

void AlarmClock::print(){
	cout << "현재 시각: ";
	currentTime.print();
	cout << "알람 시각: ";
	alarmTime.print();
}
void AlarmClock::changeTime(Time a){
	alarmTime = a;
}

int main() 
{
	Time alarm(6,1,1);
	Time current(12,10,20);
	AlarmClock c(alarm,current);
	cout << "AlarmClock 객체 출력" << endl;
	c.print();	
	cout << "AlarmClock 객체 알람시간 변경" << endl;
	Time change(6,30,1);
	c.changeTime(change);
	c.print();
	
	return 0;
}
