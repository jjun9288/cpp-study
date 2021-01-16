#include <iostream>
using namespace std;
int main()
{
	int arr[3][3];
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout << "[" << i << "," << j <<"] 입력 : ";
			cin >> arr[i][j];
		}
	}
	
	cout << "tic-tac-toc 화면 출력" << endl;
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			if (arr[i][j] == 0) { cout << "#" << " ";}
			else if (arr[i][j] == 1) { cout << "O" << " ";}
			else {cout << "X" << " ";}
		}
	cout << endl;
	}
	
		return 0;
}