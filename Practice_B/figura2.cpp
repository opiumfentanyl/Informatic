#include <iostream>
#include <string>
using namespace std;

class Figura{
public:
    virtual double calculateArea() const = 0;
};

class Rectangle : public Figura {
private:
    double width;
    double height;
public:
    Rectangle(double width, double height): width(width), height(height){}
    double calculateArea() const override {
        return (width * height);
    }
};

class Circle : public Figura {
private:
    double radius;
public:
    Circle(double radius): radius(radius){}
    double calculateArea() const override {
        return (3.14 * radius * radius);
    }
};

int main(void) {
    Shape* shapes[] = {
        new Rectangle(5, 3), new Circle(4)
    };

    for (int i = 0; i < 2; i++) {
        std::cout << "Area : " << shapes[i]->calculateArea() << std::endl;
    }

    return 0;
}
