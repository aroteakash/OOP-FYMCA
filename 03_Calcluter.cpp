// Write a C++ program create a calculator for an arithmetic operator (+, -, *, /). The program  should take two operands from user and performs the operation on those two operands  depending upon the operator entered by user. Use a switch statement to select the operation.  Finally, display the result.

//*Calculator Program*

#include <iostream>
using namespace std;
class Calculator
{
        double a, b, c;

public:
        void Select()
        {
                cout << "1-Addition | 2-Substraction | 3-Multiplication | 4-Division" << endl;
                cout << "Enter the 1st no :" << endl;
                cin >> a;
                cout << "Enter the 2nd no :" << endl;
                cin >> b;
        }
        void Addition()
        {
                c = a + b;
                cout << "Addition of both no : " << c << endl;
        }
        void Substraction()
        {
                c = a - b;
                cout << "Substraction of both no : " << c << endl;
        }
        void Multiplication()
        {
                c = a * b;
                cout << "Multiplication of both no : " << c << endl;
        }
        void Division()
        {
                c = a / b;
                if (b == 0)
                {
                        cout << "Division by Zero";
                }
                else
                {
                        cout << "Division of both no : " << c << endl;
                }
        }
};

int main()
{
        Calculator c1;
        c1.Select();
        char repeat;
        int ch;
        do
        {
                cout << "Enter the Choice :";
                cin >> ch;
                switch (ch)
                {
                case 1:
                        c1.Addition();
                        break;
                case 2:
                        c1.Substraction();
                        break;
                case 3:
                        c1.Multiplication();
                        break;
                case 4:
                        c1.Division();
                        break;
                default:
                        cout << "Invalid Choice :-(" << endl;
                        break;
                }
                cout << "\nDo you want to continue(y/n)?\n";
                cin >> repeat;
        } while (repeat == 'y');
        if (repeat == 'n')
                return 0;
}