#include <iostream>
#include <string>
using namespace std;
class MyWorld
{
	string name;
	MyWorld *myf;
	int popul;
public:
	MyWorld(){
		name = "";
		myf = NULL;
		popul = 0;
	};
	MyWorld(string n, MyWorld *my, int l):name(n), myf(my), popul(l){ };
	void setPopul() {
		popul++;
	}
		int getPopul(){
		return popul;
	}
	void setName(string n){
		name = n;
	}
	string getName(){
		return name;
	}
	void setMyF(MyWorld *my){
		myf = my;
	}
	MyWorld* setMyF() {
		return myf;
	}
	void print(){
		cout << "-------------------------" << endl;
		cout << "이름 : " << name << endl;
		if(myf == NULL)
			cout << "친구 : 없음 " << endl;
		else
			cout << "친구 : " << myf -> name << endl;
			cout << "인기도 : " << popul << endl;
			cout << "-------------------------" <<endl;
	}
};
   
int main()
{
	int i, j;
	string n[4]={"홍길동", "김철수", "이영희", "강진호"};
	string tmp;
	MyWorld P[4];
	cout << "친구들 : " << n[0] << " " << n[1] << " " << n[2] << " " << n[3] << endl;

	for(i=0; i < 4; i++){
		P[i].setName(n[i]);
	}
	for(i=0; i < 4; i++){
		P[i].print();
		cout << "친구를 입력하세요 : ";
		cin >> tmp;
		for(j=0; j < 4; j++){
			if(tmp == P[j].getName()){
				P[i].setMyF(&P[j]);
				P[j].setPopul();
				break;
			}
		}
	}
	cout << " **MyWorld 객체들 **" << endl;
	for(int q=0; q < 4 ; q++)
	P[q].print();
	
	return 0;
}