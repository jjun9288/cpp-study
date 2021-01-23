#include <iostream>
#include <string>
enum SORT {graduate, undergraduate};
using namespace std;
class Student{
	SORT sort;
	string name;
	string id;
	string dept;
	int grade;
	double credit;
public:
	Student(SORT so,string n, string i, string d, int g, double c):sort(so),name(n),id(i),dept(d),grade(g),credit(c) { }
	void setSort( SORT so = undergraduate){ sort = so; }
	SORT getSort(){ return sort; }
	void print(){
		cout << "========================" << endl;
		cout << "유형 : " << getSort() << endl;
		cout << "이름 : " << name << endl;
		cout << "학번 : " << id << endl;
		cout << "학과 : " << dept << endl;
		cout << "학년 : " << grade << endl;
		cout << "평점 : " << credit << endl;
	}
};
class Undergraduate : public Student{
	string club;
public:
	Undergraduate( SORT so, string n, string i, string d, int g, double c, string cl): Student(so,n,i,d,g,c),club(cl){ }
	void print(){
		Student::print();
		cout << "동아리 : " << club << endl;
	}
};
class Graduate : public Student{
	string assistant;
	double scholar;
public:
	Graduate(SORT so, string n, string i, string d, int g, double c, string a, double s): Student(so,n,i,d,g,c),assistant(a),scholar(s){ }
	void print(){
		Student::print();
		cout << "조교유형 : " << assistant << endl;
		cout << "장학금비율 : " << scholar << endl;
	}
};
int main()
{
	Undergraduate u(undergraduate,"김수현","20180021","컴공과",3,3.7,"농구부");
	Graduate g(graduate,"이민정","20150012","영어과",1,4,"교육조교",0.5);
	u.print();
	g.print();
	
	return 0;
}