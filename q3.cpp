// Create a abstract class Shape with pure virtual method area;
// Create Rectangle,Circle,Square class..inherit them from Shape class..Override area method.
// Test these all classes by creating object of respective class.
#include <iostream>
using namespace std;
class Shape
{
    int x;
public:
    virtual void area() = 0;
};
class rectangle : public Shape
{
    int y = 10;
public:
    void area()
    {
        cout << "The area of Rectangle is :" << y * y << "sq unit" << endl;
    }
};
class circle : public Shape
{
    int r = 10;
public:
    void area()
    {
        cout << "The area of circle is :" << 3.14 * r * r << "sq unit"<<endl;
    }
};
class square : public Shape
{
    int s = 10;
public:
    void area()
    {
        cout << "The area of Square is :" << s * s << "sq unit"<<endl;
    }
};
int main()
{
    square s1;
    s1.area();
    circle c1;
    c1.area();
    rectangle r1;
    r1.area();
    return 0;
}