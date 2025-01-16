/*Design a C++ class named Parallelogram to represent a parallelogram's properties and calculate its area. The Parallelogram class should have some attributes. The Parallelogram class should also have the following member functions:
setData1(): A setter function that sets the value.
setData2 (): A setter function that sets the value.
getData1(): A getter function that returns the value.
getData2 (): A getter function that returns the value.
getArea(): A getter function that returns the value of the parallelogram Area.
display (): A function that shows the area of the parallelogram.
Now, write a C++ program that demonstrates how to create two objects of Parallelogram class using default and parameterized constructors, set parallelogram information, and access it using the getter functions. Finally calculate and then show the parallelogram area*/
#include <iostream>
using namespace std;
class Paralelelogram
{
private:
    int base;
    int height;

public:
    void setData1(int a)
    {
        base = a;
    }
    void setData2(int b)
    {
        height = b;
    }
    int getData1()
    {
        return base;
    }
    int getData2()
    {
        return height;
    }
    float getArea()
    {
        float area = base * height;
        return area;
    }
    void display()
    {
        cout << "Area of the parallelogram : " << getArea();
    }
};
int main()
{
    Paralelelogram haha;
    haha.setData1(10);
    haha.setData2(20);
    cout << haha.getArea();

    return 0;
}