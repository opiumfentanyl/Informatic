#include <iostream>
#include <string>
using namespace std;

class Fruit{
public:
    virtual void getVitamins() const {
        cout << "Vitamins were obtained." << endl;
    }
};

class Apple: public Fruit{
public:
    void getVitamins() const override {
        cout << "Vitamins were obtained from apple." << endl;
    }
};

class Orange: public Fruit{
public:
    void getVitamins() const override {
        cout << "Vitamins were obtained from orange." << endl;
    }
};

void vitamins(const Fruit& fruit) {
    fruit.getVitamins();
}

int main() {
    Apple apple;
    Orange orange;

    vitamins(apple);
    vitamins(orange);

    return 0;
}

