#include <iostream>
using namespace std;
int main() {
	int score;
	cout << "점수를 입력 : ";
	cin >> score;
	
	switch(score/10){
		case 6 : cout << score << "의 학점은 D 입니다.\n";
			break;
		case 7 : cout << score << "의 학점은 C 입니다.\n";
			break;
		case 8 : cout << score << "의 학점은 B 입니다.\n";
			break;
		case 9 : cout << score << "의 학점은 A 입니다.\n";
			break;
		case 10 : cout << score << "의 학점은 A 입니다. \n";
			break;
		default : cout << score << "의 학점은 F 입니다. \n";
			break;
	}	
}