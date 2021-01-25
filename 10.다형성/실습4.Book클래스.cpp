#include <iostream>
#include <string>
using namespace std;
class Book {
protected:
	int number; 
	string title; 	
public:
	Book(int n, string t) {
		number = n;
		title = t;
	}
	virtual int getLateFees(int days) = 0;
	void print(){
		cout<<"번 호 : "<<number<<endl;
		cout<<"제 목 : "<<title<<endl;
	}
};

class Novel : public Book {
public:
	Novel(int n, string t):Book(n,t){}
	int getLateFees(int days) {
		return days * 300;
	}
};

class Poet : public Book {
public:
	int getLateFees(int days) {
		return days * 200;
	}
};

class ScienceFiction : public Book {
public:
	int getLateFees(int days) {
		return days * 600;
	}
};

int main(void){
	Book *arr[4];
	arr[0] = new Novel(101,"기적");
	arr[1] = new Novel(201,"겨울즈음");
	arr[2] = new Novel(301,"바벨탑");
	arr[3] = new Novel(102,"농담");
	
	for(int i=0; i<4; i++){
		arr[i]->print();
	}
	cout << endl;
	cout<<"책 모두 6일 연체후 연체료 계산"<<endl;
	for(int i=0; i<4; i++){
		arr[i]->print();
		cout<<arr[i]->getLateFees(6)<<"원"<<endl;
	}
	for(int i=0; i<4; i++){
		delete arr[i];
	}
	cout << endl;

	return 0;
}