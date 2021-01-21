#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Contact{
	string name;
	string phone;
public:
	Contact(string name="", string phone="") : name(name), phone(phone) {}
	string getName(){
		return name;
	}
	string getPhone(){
		return phone;
	}
	bool find(Contact other){
		if (getName() == other.getName()){
			return true;
		}
		return false;
	}
};
int main() {
	string a;
	bool b;
	vector<Contact> vec;
	Contact c1("김철수","010-5555-4567");
	vec.push_back(c1);
	Contact c2("윤준영","010-9924-8177");
	vec.push_back(c2);
	Contact c3("홍길동","010-2222-3333");
	vec.push_back(c3);
	cout << "전화번호를 찾는 이름 : ";
	cin >> a;
	Contact c4(a);
	
	for (auto p=vec.begin(); p!=vec.end(); p++){
		b = (*p).find(c4);
		if(b==true){
			cout << (*p).getName() << "의 전화번호는 : " << (*p).getPhone() << " 입니다." << endl;
			break;
		}
		else { cout << " sorry, not found" << endl; }
	}
	return 0;
}