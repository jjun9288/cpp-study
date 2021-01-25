#include <iostream>
#include <string>
using namespace std;
class Product {
protected:
	string name;
	double price;
public:
	Product(string n, double p){
		name = n;
		price = p;
	}
	virtual double getPrice(){
		return price;
	}
	void print(){
		cout<<"==================="<<endl;
		cout<<"상품명 : "<<name<<endl;
		cout<<"가  격 : "<<price<<endl;
	}
};

class DiscountProduct : public Product{
	double discount;
	int num;
public:
	DiscountProduct(string n, double p, double d,int m) : Product(n,p){
		discount = d;
		num = m;
	}
	double getPrice(){
	return price*((100-discount)/100);
	}
	void print(){
		Product::print();
		cout<<"할인가 : "<< getPrice()<<endl;
		cout<<"현재물량 : "<< num <<endl;
	}
};

int main(void){
	Product *p1 = new Product("빠새",2500);
	Product *p2 = new Product("빼빼로",2000);
	DiscountProduct *p3 = new DiscountProduct("꼬깔꼰",2500,20,50);

	p1->print();
	p2->print();
	p3->print();
	return 0;
}