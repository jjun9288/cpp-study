#include <iostream>
#include <string>
using namespace std;
class Account{
private:
	int number;
	string owner;
	int balance;
public:
	void setNumber(int a);
	int getNumber();
	void setOwner(string name);
	string getOwner();
	void setBalance(int amount);
	int getBalance();
	void deposit(int amount);
	void withdraw(int amount);
	void transfer(Account other, int amount);
	void print();
};
void Account::setNumber(int a){
	number = a;
}
int Account::getNumber(){
	return number;
}
void Account::setOwner(string name){
	owner = name;
}
string Account::getOwner(){
	return owner;
}
void Account::setBalance(int amount){
	balance = amount;
}
int Account::getBalance(){
	return balance;
}
void Account::deposit(int amount){
	balance += amount;
}
void Account::withdraw(int amount){
	balance -= amount;
}
void Account::transfer(Account other,int amount){
		balance -= amount;
		other.balance += amount;
}
void Account::print(){
	cout << "계좌번호 : " << number << endl;
	cout << "계좌주인 : " << owner << endl;
	cout << "계좌잔액 : " << balance << endl;
	cout << endl;
}
int main() 
{
	Account Kim,Lee;
	Kim.setNumber(1);
	Kim.setOwner("김철수");
	Kim.setBalance(50000);
	Kim.print();
	Lee.setNumber(2);
	Lee.setOwner("이영희");
	Lee.setBalance(100000);
	Lee.print();
	cout << "김철수에 200000 입금 후" << endl;
	Kim.deposit(200000);
	Kim.print();
	cout << "김철수에 70000 출금 후" << endl;
	Kim.withdraw(70000);
	Kim.print();
	cout << "김철수가 이영희에게 60000 송금 후" << endl;
	Kim.transfer(Lee, 60000);
	Kim.print();
	Lee.print();
	
	return 0;
}