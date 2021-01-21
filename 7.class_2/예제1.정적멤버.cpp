#include <iostream>
#include <string>
using namespace std;
class Car{
   int speed;
   int gear;
   string color;
public:
   static int count;
   Car(int s=0, int g=1, string c="white"):speed(s),gear(g),color(c){
      count ++;
   }
   ~Car(){
      count --;
   }
   
   void setSpeed(int s){
      speed = s;
   }
   int getSpeed(){
      return speed;
   }
   void setSameSpeed(Car *p){
      if(this->getSpeed() > p->getSpeed()){
         this -> getSpeed();
         p -> speed = this -> getSpeed();
         }
      else
         this -> speed = p -> getSpeed();
         
   }
   void print(){
      cout << "speed : " << speed << " gear : " << gear << " color : " << color << endl;
   }
};
int Car::count = 0;
int main()
{
   Car c1;
   c1.print();
   Car c2(30);
   c2.print();
   Car c3(50,3);
   c3.print();
   Car c4(100,4,"black");
   c4.print();
   cout << "Car의 객체 수 : " << Car::count << endl;
   c2.setSameSpeed(&c3);
   c2.print();
   c3.print();
   
   return 0;
}