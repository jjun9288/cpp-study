#include <iostream>
using namespace std;
int main() {
	int me;
	int com;
	
	cout << "가위(1) 바위(2) 보(3) 선택 : ";
	cin >> me;
	
	srand((unsigned)time(NULL));
	com = rand()%3+1;
	
	if(com == 1){
		cout << "컴퓨터 가위(1)로";
		if(me == com)
			cout << " 사용자와 비김";
		else if (me==2)
			cout << " 사용자가 짐";
		else
			cout << " 사용자가 이김";
	}
	if(com == 2){
		cout << "컴퓨터 바위(2)로";
		if(me == com)
			cout << " 사용자와 비김";
		else if (me==1)
			cout << " 사용자가 짐";
		else
			cout << " 사용자가 이김";
	}
	if(com == 3){
		cout << "컴퓨터 보(3)로";
		if(me == com)
			cout << " 사용자와 비김";
		else if (me==2)
			cout << " 사용자가 짐";
		else
			cout << " 사용자가 이김";
	}
	
	
	return 0;
}