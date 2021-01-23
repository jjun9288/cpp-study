#include <iostream>
#include <string>
using namespace std;
class Book{
	string book;
	int page;
	string author;
public:
	Book(string b, int p, string a):book(b),page(p),author(a){}
	void setPage(int p){ page = p; }
	int getPage() { return page; }
	void print(){
		cout << "======================" << endl;
		cout << "책 제 목 : " << book << endl;
		cout << "페이지수 : " << page << endl;
		cout << "책 저 자 : " << author << endl;
	}
};

class Magazine : public Book{
	string date;
public:
	Magazine(string b, int p, string a, string d):Book(b,p,a), date(d){ }
	void print(){
		Book::print();
		cout << "출 판 일 : " << date << endl;
	}
	
};
int main() 
{
	Book b1("C++ espresso", 600, "천인국");
	Magazine m1("객체지향",300,"홍길동","2020/01/01");
	b1.print();
	m1.print();
	if(b1.getPage() > m1.getPage()){
		cout << "C++ espresso 이 더 두껍습니다!";
	}
	else { cout << " 객체지향이 더 두껍습니다!"; }
	
	return 0;
}