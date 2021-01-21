#include <iostream>
#include <vector>
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
	void setPrice(int price){
		this -> price = price;
	}
	void print(){ 
		cout << "책 제목 : " << title << " 가격 : " << price << endl;
	}
};
int main() 
{
	vector <Book> vec;
	for (int i=0; i<4; i++){
		Book book;
		vec.push_back(book);
	}
	vec[0].setTitle("노동의 종말");
	vec[1].setTitle("타인의 고통");
	vec[2].setTitle("반항인");
	vec[3].setTitle("고래");
	
	for(auto p=vec.begin(); p!=vec.end(); p++)
		(*p).print();
	
	cout << "인덱스 2원소 삭제 후 출력" << endl;
	vec.erase(vec.begin()+2);
	for (Book b : vec)
		b.print();
	return 0;
}

