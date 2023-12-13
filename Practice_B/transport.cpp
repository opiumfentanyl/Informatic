#include <iostream>
#include <string>
using namespace std;

class Vehicle{
protected:
    double speed;
    string type;
public:
    Vehicle(double speed, string type): speed(speed), type(type) {}
};

class Car : public Vehicle{
protected:
    string model;
public:
    Car(double speed, string type, string model): Vehicle(speed, type), model(model){}
    void carInfo(){
        std::cout<<"Information about "<<type<<":\nModel: "<<model<<"\nMax. Speed: "<<speed<<std::endl;
    }
};

class Bike : public Vehicle{
protected:
    string color;
public:
    Bike(double speed, string type, string color): Vehicle(speed, type), color(color) {}
    void bikeInfo(){
        std::cout<<"\nInformation about "<<type<<":\nColor: "<<color<<"\nMax. Speed: "<<speed<<std::endl;
    }
};

int main()
{
    Car car(240,"car", "BMW");
    Bike bike(24,"bike", "Blue");

    car.carInfo();
    bike.bikeInfo();

    return 0;
}
