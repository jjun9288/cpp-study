#include <iostream>
#include <string>
using namespace std;
class Student{
	string name;
	string telephone;
public:
	Student(const string n = "", const string t = "");
	string getTelephone() const;
	void setTelephone(const string t);
	string getName() const;
	void setName(const string n);
};
Student::Student(const string n, const string t){
	name = n;
	telephone = t;
}
string Student::getTelephone() const{
	return telephone;
}
void Student::setTelephone(const string t){
	telephone = t;
}
string Student::getName() const{
	return name;
}
void Student::setName(const string n){
	name = n;
}
class Lab{
	string name;
	Student *chief;
	Student *manager;
public:
	Lab(const string n);
	void setChief(Student *p);
	void setManager(Student *p);
	void print() const;
};
Lab::Lab(const string n){
	name = n;
	chief = NULL;
	manager = NULL;
}
void Lab::setChief(Student *p){
	chief = p;
}
void Lab::setManager(Student *p){
	manager = p;
}	
void Lab::print() const{
	cout << name << " 연구실" << endl;
	if(chief != NULL){ cout << "실장 : " << chief->getName() << endl; }
	else { cout << "실장은 아직 없습니다." << endl; }
	if(manager != NULL) { cout << "총무 : " <<manager->getName() << endl; }
	else { cout << "총무는 아직 없습니다." << endl; }
}
int main()
{
	Lab lab("영상처리");
	lab.print();
	
	Student *p = new Student("김철수","010-2403-2323");
	lab.setChief(p);
	lab.setManager(p);
	lab.print();
	
	delete p;
	return 0;
}	