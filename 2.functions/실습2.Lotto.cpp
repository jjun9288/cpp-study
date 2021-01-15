#include <iostream>
#include <time.h>
using namespace std;
int get_number(int a);
int is_winning_ticket(int x, int y);
int main() {
	srand((unsigned)time(NULL));
	int num;
	int ran;
	int win;
	
	cout << "복권 번호 입력 (1~100) : ";
	cin >> num;
	cout << "복권 : " << ran;
	ran = get_number(ran);
	win = is_winning_ticket(num,ran);
	return 0;
}

int get_number(int a){
	a = rand()%100 + 1;
	return a;
}

int is_winning_ticket(int x, int y){	
	if(x==y)
		cout << "복권에 당첨되었습니다.";
	else
		cout << "복권이 당첨되지않았습니다. 다음기회에!!!";
	return 0;
}