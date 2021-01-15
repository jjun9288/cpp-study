#include <iostream>
using namespace std;
int save(int a, int b);
int main() {
	int my_money;
	int add_money = 0;
	while(my_money!=0){
		cout << "입금 금액 (종료는 0) : ";
		cin >> my_money;
		add_money = save(add_money, my_money);
		cout << my_money << "원 입금후 총액 : " << add_money << endl;
	}
	return 0;
}

int save(int a, int b){
	a += b;
	return a;
}