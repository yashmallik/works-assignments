#include <iostream>
using namespace std;

class Abtraction
{
    private:
    int a, b;

    public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    };
    void display()
    {
        std::cout << "a = "<<a << std::endl;
        std::cout << "b = " <<b << std::endl;
    };
};

class Shape {
    public:
    virtual int Area() = 0;
    void setWidth(int w) {
        width = w;
    };
    void setHeight(int h) {
        height = h;
    };
    protected:
    int width;
    int height;
    
};
class Rectangle: public Shape {
    public:
    int Area() {
        return (width*height);
    };
};
class Triangle: public Shape {
    public:
    int Area() {
        return (width*height);
    };
};
int main()
{
    Rectangle R;
    Triangle T;
    R.setWidth(5);
    T.setWidth(20);
    R.setHeight(10);
    T.setHeight(8);
    cout << "The area of the rectangle is " << R.Area() << endl;
    cout << "The area of the Triangle is " << T.Area() << endl;
    Abtraction obj;
    obj.set(10, 20);
    obj.display();
    return 0;
}
