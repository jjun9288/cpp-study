#include <iostream>
using namespace std;
int main() {
	int count = 0;
	for(int a=1; a<=100; a++){
		for(int b=1; b<=100; b++){
			for(int c=1; c<=100; c++){
				if((a*a)+(b*b)==(c*c)){
					cout << a << " : " << b << " : " << c << endl;
					count +=1;
				}	
			}
		}
	}
	cout << "총개수는 " << count << "개 입니다.";
	return 0;
}