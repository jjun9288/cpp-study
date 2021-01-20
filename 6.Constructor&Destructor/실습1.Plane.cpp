#include <iostream>
#include <string>
using namespace std;
class Plane{
	int id;
	string model;
	int num;
public:
	Plane(){
		id = 0;
		model = "";
		num = 0;
	}
	Plane(int a){
		id = a;
		model = "";
		num = 0;
	}
	Plane(int a, string b){
		id = a;
		model = b;
		num = 0;
	}
	Plane(int a, string b, int c){
		id = a;
		model = b;
		num = c;
	}
	void set_id(int a);
	int get_id();
	void set_model(string b);
	string get_model();
	void set_num(int c);
	int get_num();
	void print();
};
void Plane::set_id(int a){
	id = a;
}
int Plane::get_id(){
	return id;
}
void Plane::set_model(string b){
	model = b;
}
string Plane::get_model(){
	return model;
}
void Plane::set_num(int c){
	num = c;
}
int Plane::get_num(){
	return num;
}
void Plane::print(){
	cout << "식별번호 : " << id << endl;
	cout << "모델명 : " << model << endl;
	cout << "승객수 : " << num << endl;
}
int main() 
{
	Plane p1;
	p1.print();
	Plane p2(101);
	p2.print();
	Plane p3(201, "보잉747");
	p3.print();
	Plane p4(303, "보잉747", 500);
	p4.print();
	p1.set_id(123);
	p1.set_model("보잉 901");
	p1.set_num(1000);
	p1.print();
	
	return 0;
}