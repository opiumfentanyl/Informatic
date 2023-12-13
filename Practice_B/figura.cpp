#include <iostream>
#include <string>
using namespace std;

class Figura{
public:
    void calculateArea()
    {
        cout << "Figura" << endl;
    }
};

class Rectangle: public Figura {
private:
    double width;
    double height;
public:
    Rectangle(double width, double height): width(width), height(height){}

    void calculateArea() const{
        std::cout<<"Rectangle area: "<<width * height<<std::endl;
    }
};

class Circle : public Figura {
private:
    double radius;
public:
    Circle(double radius): radius(radius){}
    void calculateArea() const
    {
        std::cout << "Circle area: " << 3.14 * radius * radius << std::endl;
    }
};

int main() {
    Rectangle rectangle(5, 3);
    Circle circle(5);
    rectangle.calculateArea();
    circle.calculateArea();

    return 0;
}
