#include <iostream>

using namespace std;
class Student
{
    public:

     void greeting (){
      cout<< "Hello World! :)"<< "\n";
}
    
};

class MyClass {
    public:
     void tata();
};

void MyClass::tata() {
    cout << "Good bye World :("<<"\n";
}

class Car {
    public:
    int speed(int maxSpeed);
};
int Car::speed(int maxSpeed) {
    return maxSpeed;
}

class Shape {
    public:
     void setNum(int num, int place){
         for(int i =0; i<num; i++){
            
             place--;
             for(int j = 0; j<place; j++){
                 cout<<num;
                 
                }
                cout<<"\n";
            }
     }
};
int main()
{

  Student hiObj;
  hiObj.greeting();
  Car carObj;
  cout <<"maxSpeed" <<carObj.speed(200)<<"\n";
  Shape shapeObj;
  shapeObj.setNum(20, 8);
  MyClass byeObj;
  byeObj.tata();
  
    return 0;
    
}

