#include <iostream>
using namespace std;

int main() 
{
	int arr1[3][5];
	int arr2[5][3];
	
	for (int i=0;i<3;i++){
		for (int j=0;j<5;j++){
			arr1[i][j] = j+1;
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl; 
	
	for (int j=0;j<5;j++){
		for (int i=0;i<3;i++){
			arr2[j][i] = arr1[i][j];
			cout << arr2[j][i] << " ";
		}
		cout << endl;
	}

	return 0;
}