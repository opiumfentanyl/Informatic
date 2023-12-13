#include <iostream>
using namespace std;

class House{
private:
    double rooms;
    string adress;
public:
    House(double rooms, string adress): rooms(rooms), adress(adress){}

    string getAdress() {
        return adress;
    }
    double getRooms(){
        return rooms;
    }
};

class Human{
protected:
    string name;
    int age;
public:
    Human(string name, int age): name(name), age(age) {}
};

class Villager : Human {
private:
    House house;
public:
    Villager(string name, int age, House house) : Human(name, age), house(house) {}

    void linkHouse() {
        std::cout << "Villager " << name << " lives at address: " << house.getAdress()<< ", number of rooms in the house: " << house.getRooms() << std::endl;
    }
};

int main(void) {
    House house(3, "Saratov");
    Villager villager("Oleg", 48, house);

    villager.linkHouse();

    return 0;
}
