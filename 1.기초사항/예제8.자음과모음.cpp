#include <iostream>
using namespace std;
int main()
{
	char ch;
	while(ch != 'q', 'Q'){
		cout << "영문자 입력(종료 Q,q) : ";
		cin >> ch;
		switch(ch){
			case 'a' :
			case 'e' :
			case 'i' :
			case 'o' :
			case 'u' :
				cout << ch << "모음\n";
				break;
			case 'q' :
			case 'Q' :
				return 0;
			default :
				cout << ch << "자음\n";
				break;
		}	
	}
	
	return 0;
}