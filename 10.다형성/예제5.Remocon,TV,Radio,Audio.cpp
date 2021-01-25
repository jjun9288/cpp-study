#include <iostream>
using namespace std;
class Remocon{
	int volume;
public:
	Remocon(){ volume = 0; }
	void setVolume(int v){ volume += v;}
	int getVolume(){ return volume; }
	virtual void speakUp() = 0;
	virtual void speakDown() = 0;
	virtual void print() = 0;
};
class TV : public Remocon{
public:
	void speakUp(){ setVolume(5); }
	void speakDown(){ setVolume(-5); }
	void print(){ cout << "TV volume : " << getVolume() << endl; }
};
class Radio : public Remocon{
public:
	void speakUp(){ setVolume(10); }
	void speakDown(){ setVolume(-10); }
	void print() { cout << "Radio volume : " << getVolume() << endl; }
};
class Audio : public Remocon{
public:
	void speakUp(){ setVolume(2); }
	void speakDown(){ setVolume(-12); }
	void print() { cout << "Audio volume : " << getVolume() << endl; }
};
void compareVolume(int a, int b){
	cout << "TV와 Radio의 볼륨 비교" << endl;
	if(a > b){ cout << "TV의 볼륨이 Radio의 볼륨보다 큼";}
	else { cout << "Radio의 볼륨이 TV의 볼륨보다 큼";}
}
int main() 
{
	Remocon *arr[3];
	arr[0] = new TV();
	arr[1] = new Radio();
	arr[2] = new Audio();
	
	cout << "초기 볼륨" << endl;
	for(int i=0; i<3; i++){
		arr[i] -> print();
	}
	cout << endl;
	cout << "speakUp 볼륨" << endl;
	for(int i=0; i<3; i++){
		arr[i] -> speakUp();
		arr[i] -> print();
	}
	for(int i=0; i<3; i++){
		delete arr[i];
	}
	cout << endl;
	
	TV t;
	Radio r;
	int a = t.getVolume();
	int b = r.getVolume();
	compareVolume(a,b);
	return 0;
}