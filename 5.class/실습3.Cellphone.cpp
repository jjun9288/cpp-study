#include <iostream>
#include <string>
using namespace std;
class CellPhone{
private:
	string model;
	string company;
	string color;
	string power;
	bool cam;
public:
	void setModel(string a);
	string getModel();
	void setCompany(string b);
	string getCompany();
	void camOn();
	void camOff();
	void print();
};
void CellPhone::setModel(string a){
	model = a;
}
string CellPhone::getModel(){
	return model;
}
void CellPhone::setCompany(string b){
	company = b;
}
string CellPhone::getCompany(){
	return company;
}
void CellPhone::camOn(){
	cam = true;
}
void CellPhone::camOff(){
	cam = false;
}
void CellPhone::print(){
	cout << "모델명 : " << model << endl;
	cout << "제조사 : " << company << endl;
	cout << "카메라 " << (cam == true ? "장착" : "미장착");
}
int main()
{
	CellPhone myPhone;
	myPhone.setModel("Samsung123");
	myPhone.setCompany("samsung");
	myPhone.print();
		
	return 0;
}