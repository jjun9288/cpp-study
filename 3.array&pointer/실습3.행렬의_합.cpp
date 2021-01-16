#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
	int arr[3][5] = {{12,56,32,16,98},{99,56,34,41,3},{65,3,87,78,21}};
	int sum = 0;
	cout << "배열과 배열의 행과 열의 합 출력" << endl;
	
	for (int i=0; i<3; i++){
		for (int j=0; j<5; j++){
			cout << setw(3) << arr[i][j];
			sum += arr[i][j];
		}
		cout << "  " << sum << endl;
		sum = 0;
	}
 
	for (int k=0; k<5; k++){
		for (int m=0; m<3; m++){
			sum += arr[m][k];
		}
		cout << setw(3) << sum;
		sum = 0;
	}
	
	return 0;
}