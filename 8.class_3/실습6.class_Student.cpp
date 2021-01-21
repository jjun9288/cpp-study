#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Student{
	string name;
	double grade;
public:
	Student(string name="", double grade=0.0) : name(name), grade(grade) {}
	double getGrade(){
		return grade;
	}
	string getName(){
		return name;
	}
	void print(){
		cout << "이름 : " << name << endl;
		cout << "학점 : " << grade << endl;
	}
};
bool compare(Student a, Student b){
	return a.getGrade() < b.getGrade();
}
int main()
{
	vector<Student> vec;
	Student s1("홍길동",3.7);
	vec.push_back(s1);
	s1.print();
	Student s2("이현이",4.1);
	vec.push_back(s2);
	s2.print();
	Student s3("김철수",2.9);
	vec.push_back(s3);
	s3.print();
	cout << endl;
	
	cout << "벡터 출력" << endl;
	for (Student s:vec)
		s.print();
	cout << endl;
	
	cout << "벡터 정렬 후 출력" << endl;
	sort(vec.begin(),vec.end(),compare);
	for (int i = 0; i < 3; i++) {
		cout << "이름 : " << vec[i].getName() << endl;
		cout << "학점 : " << vec[i].getGrade() << endl;
	}

	
	return 0;
}