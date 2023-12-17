// Inheritance Geometrical

#include <iostream>
using namespace std;
class GeoShape
{
public:
    float pi = 3.14, area, radius, side, length, width, breadth, height;
};
class Circle : public GeoShape
{
public:
    void circle()
    {
        cout << "Enter the radius:";
        cin >> radius;
        area = pi * radius * radius;
        cout << "Area of circle is: " << area;
    }
};
class Rectangle : public GeoShape
{
public:
    void rectangle()
    {
        cout << "Enter the length:";
        cin >> length;
        cout << "Enter the width";
        cin >> width;
        area = length * width;
        cout << "Area of Rectangle is :" << area;
    }
};
class Square : public GeoShape
{
public:
    void square()
    {
        cout << "Enter the side";
        cin >> side;
        area = side * side;
        cout << "Area of square is: " << area << endl;
    }
};
class Parallelogram : public GeoShape
{
public:
    void para()
    {
        cout << "Enter the length of parallelogram:";
        cin >> length;
        cout << "Enter the height of parallelogram";
        cin >> height;
        area = length * height;
        cout << "Area of Paralleologram is " << area << endl;
    }
};
class Triangle : public Parallelogram
{
public:
    void tri()
    {
        cout << "Enter the breadth :";
        cin >> breadth;
        cout << "Enter the height : ";
        cin >> height;
        area = 0.5 * breadth * height;
        cout << "Area of Paralleologram is " << area << endl;
    }
};

int main()
{
    Circle c;
    Rectangle r;
    Square s;
    Triangle t;
    int ch;
    char repeat;
    while (1)
    {
        cout << "1.Single inheritance |2.Hierarchical inheritance|3.Multilevel inheritance|" << endl;
        cout << "Enter your choice" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "...Single Inheritance.." << endl;
            cout << "..CIRCLE.." << endl;
            c.circle();
            break;
        case 2:
            cout << "...Hierarchical Inheritance.." << endl;
            cout << "..RECTANGLE.." << endl;
            r.rectangle();
            cout << "\n..SQUARE.." << endl;
            s.square();
            break;
        case 3:
            cout << "...Multilevel Inheritance.." << endl;
            cout << "..TRIANGLE.." << endl;
            t.tri();
            cout << "..PAARALLELOGRRAM.." << endl;
            t.para();
            break;
        default:
            cout << "Invalid input";
            break;
        }
    label:
        cout << "Do you want to repeat(y/n)" << endl;
        cin >> repeat;
        if ((repeat == 'y') || (repeat == 'Y'))
        {
            continue;
        }
        else if ((repeat == 'n') || (repeat == 'N'))
        {
            break;
        }
        else
        {
            cout << "Enter (y/n) or (Y/N)" << endl;
            goto label;
        }
    }
   return 0;
}