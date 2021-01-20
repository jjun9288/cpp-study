#include <iostream>
#include <string>
using namespace std;
class Product{
private:
	string name;
	string eval;
	string price;
public:
	void setInfo(string a, string b, string c);
	string getInfo();
	bool isCheaper(Product another);
	void print();
};
void Product::setInfo(string a, string b, string c){
	name = a; eval = b; price = c;
}
string Product::getInfo(){
	return name;
	return eval;
	return price;
}
bool Product::isCheaper(Product other){
	if(stoi(price) < stoi(other.price)){
		return true;
	}
	else { return false; }
}
void Product::print(){
	cout << "제품이름 : " << name << endl;
	cout << "제품가격 : " << price << endl;
	cout << "제품평가 : " << eval << endl;
	cout << endl;
}
int main() 
{
	Product a,b;
	a.setInfo("아반떼","가성비 좋음","2000");
	a.print();
	b.setInfo("소나타","디자인 좋음","3000");
	b.print();
	if(a.isCheaper(b)){
		cout << "아반떼가 더 쌈";
	}
	else { cout << "소나타가 더 쌈"; }
	
	
	
	return 0;
}