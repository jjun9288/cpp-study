#include <iostream>
#include <string>
using namespace std;
class Person{
	string name;
	int age;
	bool gender;
public:
	Person(string n="", int a=0, bool g=true) : name(n),age(a),gender(g){ }
	void setName(string s) { name = s; }
	string getName() const { return name; }
	void setAge(int a) { age = a; }
	int getAge() const { return age; }
	void setGender(bool g) { gender = g; }
	bool getGender() const { return gender; }
};
class Employee : public Person{
	int number;
	int salary;
public:
	Employee(string n="", int a=0, bool g=true, int num=0, int s=0) : Person(n,a,g),number(num),salary(s) {}
	void setNumber(int num){ number = num; }
	int getNumber() const{ return number; }
	void setSalary(int s) { salary = s; }
	int getSalary() const{return salary; }
	void display() const{
		cout << "이름 : " << this -> getName() << endl;
		cout << "나이 : " << this -> getAge() << endl;
		if (this -> getGender()) { cout << "성별 : 남성" << endl; }
		else { cout << "성별 : 여성" << endl; }
		cout << "번호 : " << this -> getNumber() << endl;
		cout << "월급 : " << this -> getSalary() << endl;
	}
	
};
int main() 
{
	Employee e("김철수",26,true,2010001,3200);
	e.display();
	return 0;
}