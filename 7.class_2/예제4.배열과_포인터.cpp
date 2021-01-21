#include <iostream>
#include <string>
using namespace std;
class Person{
	string name;
	int age;
	string gender;
public:
	Person(string n="   ", int a=0, string c=""):name(n),age(a),gender(c){
	}
	void upAge(int s){
		this -> age += s;
	}
	void print(){
		cout << "이름 : " << name << " 나이 : " << age << " 성별 : " << gender << endl;
	}
};

int main()
{
	Person p1;
	p1.print();
	Person p2("홍길동",0," ");
	p2.print();
	Person p3("김철수",20," ");
	p3.print();
	Person p4("이영희",24,"여");
	p4.print();
	cout << endl;
	p1.upAge(1);
	p2.upAge(1);
	p3.upAge(1);
	p4.upAge(1);
	cout << "Person 객체 나이 1 증가 후 출력" << endl;
	p1.print();
	p2.print();
	p3.print();
	p4.print();
	return 0;
}