#include <iostream>
using namespace std;

int main() 
{	
	int num_count = 0;
	for (int i=1; i<=100; i++){
		int num = 0;
		for (int j=1; j<=i; j++){
			if (i%j == 0)
				num += 1;
		}
		if (num == 2){
			cout << i << " ";
			num_count += 1;
		}	
	}	
	cout << "총 소수의 개수 : " << num_count;
}