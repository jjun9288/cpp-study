#include <iostream>
using namespace std;
class Book{
	string title;
	int price;
public:
	Book(string title = "",int price = 0):title(title), price(price){ }
	~Book(){ }
	void setTitle(string title){
	this -> title = title;
	}
	void setPrice(int price){
		this -> price = price;
	}
	int getPrice(){
		return price;
	}
	void print(){ 
		cout << "책제목 : " << title << endl << "가  격 : " << price << endl;
   }
};

Book compare(Book b[],int n){
	int max = b[0].getPrice();
	int save = 0;
	for(int i=0; i<n; i++){
		if(max < b[i].getPrice()){
			max = b[i].getPrice();
			save = i;
		}
	}
	return b[save];
}

int main() 
{
	string s1,s2,s3;
	int p1,p2,p3;
	Book arr[3];
	cout << "제목 입력 : ";
	cin >> s1;
	cout << "가격 입력 : ";
	cin >> p1;
	cout << "제목 입력 : " ;
	cin >> s2;
	cout << "가격 입력 : ";
	cin >> p2;
	cout << "제목 입력 : " ;
	cin >> s3;
	cout << "가격 입력 : ";
	cin >> p3;
	arr[0].setTitle(s1);
	arr[0].setPrice(p1);
	arr[1].setTitle(s2);
	arr[1].setPrice(p2);
	arr[2].setTitle(s3);
	arr[2].setPrice(p3);
	cout << endl;
	cout << "배열출력" << endl;
	for(Book b : arr)
		b.print();
	cout << endl;
	
	cout << "가장 비싼책" << endl;
	compare(arr,3).print();
	return 0;
}