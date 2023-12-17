// Temperature

#include <iostream>
using namespace std;
class Convert 
{
public:
    double val1; 
    double val2; 
public:
    Convert(double v) 
    {
        val1 = v;
    }
public:
    double getinit()
    {
        return val1;
    }
public:
    double getconv()
    {
        return val2;
    }
    virtual void compute() 
    {
        cout << "This is base class virtual function";
    }
};
class Tempconvert : public Convert 
{
public:
    Tempconvert(double v) : Convert(v) 
    {
    }
    void compute()
    {
        val2 = ((val1 * 9 / 5) + 32);
    }
};

int main()
{
    Convert *c;
    double n;
    cout << "Enter the Temperature in Celcius : ";
    cin >> n;
    cout << "\n";
    Tempconvert t(n);
    c = &t;
    cout << "Initial temperature (Celcius):" << c->getinit() << endl;
    c->compute();
    cout << "Converted temperature (Fahrenheit):" << c->getconv() << endl<< endl;
    return 0;
}