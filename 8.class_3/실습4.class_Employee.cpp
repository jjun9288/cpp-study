#include <iostream>
#include <string>
using namespace std;
class Date{
	int year;
	int month;
	int day;
public:
	Date(int year=1900, int month=1, int day=1):year(year),month(month),day(day){}
	~Date(){ }
	void setYear(int year){
		this -> year = year;
	}	
	int getYear() {
		return year;
	}
	void setMonth(int month) {
		this -> month = month;
	}
	int getMonth() {
		return month;
	}
	void setDay(int day) {
		this -> day = day; 
	}
	int getDay() {
		return day; 
	}
	void print()
	{
		cout << year << "년" << month << "원" << day << "일" << endl;
	}
};

class Employee{
	string name;
	Date birth;
	Date hire;
public:
	Employee(string name, Date &birth, Date &hire)
	{
		this->name = name;
		this->birth = birth;
		this->hire = hire;
	}
	Employee(string name, int y1,int m1,int d1,int y2,int m2,int d2)
	{
		Date birth(y1,m1,d1);
		Date hire(y2,m2,d2);
		this -> name = name;
		this -> birth = birth;
		this -> hire = hire;
	}
	int gethireYear(){
		return this -> hire.getYear();
	}
	void print(){
		cout << "이름 : " << name << endl;
		cout << "생일 : ";
		birth.print();
		cout << "입사일 : ";
		hire.print();
	}
};

int main()
{
	Date birth(1995,7,1);
	Date hire(2020,1,1);
	Employee emp("홍길동", birth, hire);
	emp.print();
	cout << endl;
	Employee emp2("이영희", 1999,12,30,2019,3,1);
	emp2.print();
	cout << endl;
	if(emp.gethireYear() > emp2.gethireYear())
		cout << "이영희 직원이 홍길동 직원보다 입사년도가 빠름";
	else if(emp.gethireYear() < emp2.gethireYear())
		cout << "홍길동 직원이 이영희 직원보다 입사년도가 빠름";
	else if(emp.gethireYear() == emp2.gethireYear())
		cout << "홍길동 직원과 이영희 직원의 입사년도는 동일하다.";
}