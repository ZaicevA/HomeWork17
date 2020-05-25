#include <iostream>
#include "Human.h"

class Vector
{
public:
    Vector() : x(5), y(5), z(5)
    {}
    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
    {}
    void Show()
    {
        std::cout << "\n" << x << " " << y << " " << z;
    }
    double Magnitude()
    {
        return sqrt(x * x + y * y + z * z);
    }
private:
    double x = 0;
    double y = 0;
    double z = 0;
};

int main()
{
    Human human("Igor", 22);
    human.Display();
}