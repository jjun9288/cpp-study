#include <iostream>
#include <string>
using namespace std;
class Food{
	int calorie;
	int price;
public:
	Food(int c, int p):calorie(c),price(p) { }
	void print(){
		cout << "칼로리 : " << calorie << endl;
		cout << "가격 : " << price << endl;
	}
	void discount(){
		cout << "칼로리 : " << calorie << endl;
		cout << "가격 : " << (price * 0.9) << endl;
	}
};
class Melon : public Food{
	string farm;
public:
	Melon(int c, int p, string f):Food(c,p), farm(f) { }
	void print(){
		Food::print();
		cout << "농원 : " << farm << endl;
	}
	void discprint(){
		Food::discount();
		cout << "농원 : " << farm << endl;
	}
};
int main() 
{
	int sale;
	Melon arr[3] = {
		Melon(120,6000,"한아름농원"),
		Melon(150,7000,"한아름농원"),
		Melon(180,8000,"우리농원")
	};
	
	for(int i=0; i<3; i++){
		arr[i].print();
	}
	
	cout << endl;
	cout << "10%할인가" << endl;
	
	for(int i=0; i<3; i++){
		arr[i].discprint();
	}
	
	
	return 0;
}