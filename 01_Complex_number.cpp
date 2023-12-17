//Implement a class Complex which represents the Complex Number data type. Implement  the following operations: 1. Constructor (including a default constructor which creates the complex number0+0i). 2. Overloaded operator+ to add two complex numbers. 3. Overloaded operator* to multiply two complex numbers

#include <iostream>
using namespace std;
class complex
{
public:
    int real, img;
public:
    complex(int re = 0, int im = 0)
    {
        real = re;
        img = im;
    }
    complex operator+(complex const &obj)
    {
        complex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return (temp);
    }

    complex operator*(complex &obj1)
    {
        complex temp1;
        temp1.real = ((real * obj1.real) - (img * obj1.img));
        temp1.img = ((img * obj1.real) + (real * obj1.img));
        return (temp1);
    }
    void display()
    {
        cout << real << "+" << img << "i" << endl;
    }
};
int main()
{
    complex c1, c2;
    cout << "Enter first real no:" << endl;
    cin >> c1.real;
    cout << "Enter second img no:" << endl;
    cin >> c1.img;
    cout << "First complex no is:=" << c1.real << "+" << c1.img << "i" << endl;
    cout << "Enter second real no:" << endl;
    cin >> c2.real;
    cout << "Enter second img no:" << endl;
    cin >> c2.img;
    cout << "Second complex no.=" << c2.real << "+" << c2.img << "i" << endl;
    complex c3 = c1 + c2;
    complex c4 = c1 * c2;
    int ch;
    while (1)
    {
        cout << "***MENU***" << endl;
        cout << "1) Addition :" << endl;
        cout << "2) Multiplication :" << endl;
        cout << "3) Exit :" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            c3.display();
            break;
        case 2:
            c4.display();
            break;
        case 3:
            exit(0);
            break;
        }
    }
    return 0;
}