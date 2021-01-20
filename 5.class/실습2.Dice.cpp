#include <iostream>
using namespace std;
class Dice{
private :
	int num;
public :
	void setnum(int x);
	int getnum(); 
	void roll();
};
void Dice::setnum(int x){
	num = x;
}
int Dice::getnum(){
	return num;
}
void Dice::roll(){
	srand((unsigned)time(NULL));
	for (int i=1;i<=num+1;i++){
		cout << i << " 번째 : ";
		cout << rand()%6+1 << endl;
	}
}
int main()
{
	Dice myDice;
	myDice.setnum(5);
	myDice.roll();
	
	return 0;
}