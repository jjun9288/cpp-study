#include <iostream>
using namespace std;
class Time
{
	int hour;
	int minute;
	int second;
public:
	Time(int time=0, int minute=0, int second=0):hour(hour), minute(minute), second(second){ }
	~Time(){ }
	void setHour(int hour){
		this -> hour = hour;
	}
	int getHour(){
		return hour;
	}
	void setMinute(int minute){
		this -> minute = minute;
	}
	int getMinute(){
		return minute;
	}
	void setSecond(int second){
		this -> second = second;
	}
	int getSecond(){
		return second;
	}
	void print(){
		cout << "시간 : " << hour << ":" << minute << ":" << second << endl;
	}
};

bool compareTime(Time t1, Time t2){
	if( (t1.getHour() == t2.getHour()) && (t1.getMinute() == t2.getMinute()) && (t1.getSecond() == t2.getSecond()))
		return true;
	else
		return false;
}

bool compareTime(Time *pt1, Time *pt2)
{
	if( (pt1->getHour() == pt2->getHour()) && (pt1->getMinute() == pt2->getMinute()) && (pt1->getSecond() == pt2->getSecond()))
		return true;
	else
		return false;
}

int main()
{
	Time t1,t2;
	Time &tt1 = t1, &tt2 =t2;
	Time *pt1 = &t1, *pt2 = &t2;

	t1.setHour(0);
	t1.setMinute(0);
	t1.setSecond(0);

	t2.setHour(10);
	t2.setMinute(6);
	t2.setSecond(24);

	cout<<"t1 ";
	t1.print();
	cout<<"t2 ";
	t2.print();

	if(compareTime(tt1,tt2) == 0)
		cout << "t1과 t2는 서로 다른 시간입니다." << endl;
	else if(compareTime(tt1,tt2) == 1)
		cout << "t1과 t2는 서로 같은 시간입니다." << endl;
	cout << endl;

	t1.setHour(10);
	t1.setMinute(6);
	t1.setSecond(24);

	t2.setHour(10);
	t2.setMinute(6);
	t2.setSecond(24);

	cout<<"t1 ";
	t1.print();
	cout<<"t2 ";
	t2.print();
	if(compareTime(pt1,pt2) == 0)
		cout << "t1과 t2는 서로 다른 시간입니다." << endl;
	else if(compareTime(pt1,pt2) == 1)
		cout << "t1과 t2는 서로 같은 시간입니다." << endl;

}