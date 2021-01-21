#include <iostream>
#include <string>
using namespace std;
class Book{
	string title;
	int price;
public:
	Book(){
		title = "";
		price = 0;
	}
	Book(string title, int price){
		this -> title = title;
		this -> price = price;
	}
	void setTitle(string title){
		this -> title = title;
	}
	string getTitle(){
		return title;
	}
	void setPrice(int price){
		this -> price = price;
	}
	int getPrice(){
		return price;
	}
	void print(){
		cout << "책 제목 : " << title << endl;
		cout << "가격 : " << price << endl;
	}
	void arrprint(){
		cout << "책제목 : " << title << " 가격 : " << price << endl;
	}
};
int main() 
{
	Book b1,b2,b3;
	b1.setTitle("노동의종말");
	b1.setPrice(20000);
	b1.print();
	b2.setTitle("타인의고통");
	b2.setPrice(17000);
	b2.print();
	b3.setTitle("반항인");
	b3.setPrice(15000);
	b3.print();
	
	Book arr[3] = {  
		Book("노동의종말",20000),
		Book("타인의고통",17000),
		Book("반항인",15000)
	};
	
	for (int i=0; i<3; i++){
		arr[i].arrprint();
	}
	
	return 0;
}