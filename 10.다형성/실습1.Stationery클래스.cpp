#include <iostream>
#include <string>
using namespace std;
class Stationery{
	int price;
public:
	Stationery(int p){price = p;}
	void setPrice(int p){price = p;}
	virtual int getPrice(){return price;}
	void print(){cout << "가  격 : " << price << endl;}
	virtual int total() = 0;
};

class Pen : public Stationery{
	int num;
public:
	Pen(int p, int n) : Stationery(p),num(n){}
	int getNum(){return num;}
	virtual int total(){return getPrice()*num;}
	void print(){
		cout << "Pen 객체" << endl;
		Stationery::print();
		cout << "개  수: " << num << endl;
		cout << "총금액 : " << total() << endl;
	}
};

class Eraser : public Stationery{
	int num;
public:
	Eraser(int p, int n) : Stationery(p),num(n){}
	void setNum(int n){num = n;}
	int getNum(){return num;}
	virtual int total(){
		return getPrice()*num;
	}
	void print(){
		cout << "Eraser 객체" << endl;
		Stationery::print();
		cout << "개  수: " << num << endl;
		cout << "총금액 : " << total() << endl;
	}
};

int main()
{
	Pen p(100,15);
	Eraser e(150,9);
	p.print();
	cout << endl;
	e.print();
	return 0;
}