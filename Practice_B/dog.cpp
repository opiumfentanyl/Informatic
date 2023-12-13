#include <iostream>
#include <string>
using namespace std;

class Dog{
private:
    string name;
    double age;

public:
    Dog(string name, double age) : name(name), age(age) {}
    void displayInfo(){
        std::cout<<"Name: "<<name<<"\nAge: "<<age<<std::endl;
    }
};

int main() {
    Dog myDog1("Bobik", 6);
    Dog myDog2("Oleg", 2);
    Dog myDog3("Vanek", 13);

    std::cout<<"Information about first dog: "<<std::endl;
    myDog1.displayInfo();
    std::cout<<"\nInformation about twice dog: "<<std::endl;
    myDog2.displayInfo();
    std::cout<<"\nInformation about third dog: "<<std::endl;
    myDog3.displayInfo();

    return 0;
}
