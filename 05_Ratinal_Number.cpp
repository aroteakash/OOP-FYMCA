//Create a class Rational Number (fractions) with the following capabilities:  a) Create a constructor that prevents a 0 denominator in a fraction, reduces or  simplifies fractions that are not in reduced form and avoids negative denominators.  b) Overload the addition, subtraction, multiplication and division operators for this class.  c) Overload the relational and equality operators for this class. 

 //Rational number

#include <iostream>
using namespace std;
class Rational
{
public:
    int den, num;
    Rational(int n=0, int d=0)
    {
        num=n;
        den=d;
    }
    Rational operator +(Rational &r1)
    {
        Rational temp;
        temp.num = (num*r1.den)+(r1.num*den);
        temp.den = den*r1.den;
        return (temp);
    }
    Rational operator *(Rational &r1)
    {
        Rational temp1;
        temp1.num = num * r1.num;
        temp1.den = den * r1.den;
        return (temp1);
    }
    Rational operator -(Rational &r1)
    {
        Rational temp;
        temp.num = (num*r1.den)-(r1.num*den);
        temp.den = den*r1.den;
        return (temp);
    }
    Rational operator /(Rational &r1)
    {
        Rational temp1;
        temp1.num = num * r1.den;
        temp1.den = den * r1.num;
        return (temp1);
    }
    Rational operator >(Rational &r1)
    {        
        float f1=num/float(den);
        float f2=r1.num/float(r1.den);
        if(f1>f2)
        {
            cout<<num<<"/"<<den<<" is greater"<<endl;
        }
        else if(f1<f2)
        {
            cout<<r1.num<<"/"<<r1.den<<" is greater"<<endl;
        }
        else
        {
            cout<<"Numers are Equal"<<endl;
        }
    }
    Rational operator ==(Rational &r1)
    {
        if(den==r1.den)
        {
            if(num==r1.num)
            {
                cout<<"Numers are Equal"<<endl;
            }
            else
            {
                cout<<"Numers are not Equal"<<endl;
            }
        }
        else
        {
            cout<<"Numers are not Equal"<<endl;
        }
    }
    void display()
    {
        if (den == 0)
        {
            cout << endl << "DIVIDE BY ZERO, ERROR..!!" << endl;
            exit(1);
        }
        else if (num == 0)
        {
            cout << 0;
        }
        cout << num << "/" << den << endl;
    }
};

int main()
{
    Rational c1, c2, c3;
    cout << "Enter 1st Numerator :" << endl;
    cin >> c1.num;
    cout << "Enter 1st Denominator :" << endl;
    cin >> c1.den;
    cout << "Enter 2nd Numerator :" << endl;
    cin >> c2.num;
    cout << "Enter 2nd Denominator :" << endl;
    cin >> c2.den;
    int ch;
    while (1)
    {
        cout << "****MENU****" << endl;
        cout << "1) Addition :" << endl;
        cout << "2) Multiplication :" << endl;
        cout << "3) Substraction :" << endl;
        cout << "4) Division :" << endl;
        cout << "5) Greater/Less :" <<endl;
        cout << "6) Equal or Not :" <<endl;
        cout << "7) Exit :" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1: c3=c1+c2;
            c3.display();
            break;
        case 2: c3=c1*c2;
            c3.display();
            break;
        case 3: c3=c1-c2;
            c3.display();
            break;
        case 4: c3=c1/c2;
            c3.display();
            break;
        case 5: c3=c1>c2;
            break;
        case 6: c3=c1==c2;
            break;
        case 7: return 0;
            break;
        }
    }
    return 0;
}