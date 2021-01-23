#include <iostream>
#include <string>
using namespace std;
class Employee{
private:
	string name;
	int num;
	int salary;
public:
	Employee(string n, int num)
	{
		name = n;
		this -> num = num;
	}
	void setName(string n) { name = n; }
	string getName(){ return name; }
	void setNum(int num){ this -> num = num; }
	int getNum() { return num; }
	void setSalary(int s) { salary = s; }
	int getSalary() { return salary; }
	void computeSalary(){ }
};
class SalariedEmployee : public Employee{
private:
	int msalary = 0;
public:
	SalariedEmployee(string n, int num, int s=0) : Employee(n, num)
	{ setSalary(s); }
	void setMsalary(int ms) { msalary = ms; }
	int getMsalary() { return msalary; }
	void computeSalary()
	{ msalary = getMsalary() / 12; }
};
class HourlyEmployee : public Employee{
private:
	int timesalary;
	int time;
public:
	HourlyEmployee(string n, int en, int ts=0, int t=0) : Employee(n, en)
	{
		timesalary = ts;
		time = t;
	}
	void setTimesalary(int ts) { timesalary = ts; }
	int getTimesalary() { return timesalary; }
	void setTime(int t) { time = t; }
	int getTime() { return time; }
	void computeSalary(int timesalary, int time) { setSalary(timesalary * time); }
};

int main()
{
	SalariedEmployee s("김철수",12345);
	HourlyEmployee h("홍길동", 45678);
	s.setMsalary(3996);
	h.setTimesalary(5);
	h.setTime(30);
	s.computeSalary();
	h.computeSalary(h.getTimesalary(),h.getTime());
	cout << "-----------------------" << endl;
	cout << "이름 : " << s.getName() << endl;
	cout << "사번 : " << s.getNum() << endl;
	cout << "월급 : " << s.getMsalary() << endl;
	cout << "-----------------------" << endl;
	cout << "-----------------------" << endl;
	cout << "이름 : " << h.getName() << endl;
	cout << "사번 : " << h.getNum() << endl;
	cout << "월급 : " << h.getSalary() << endl;
	cout << "-----------------------" << endl;
	return 0;
}