// Implement a class CppArray which is identical to a one-dimensional C++ array (i.e., the index set is a set of consecutive integers starting at 0) except for the following : 1. It performs range checking. 2. It allows one to be assigned to another array through the use of the assignment operator (e.g. cp1=cp2) 3. It supports a function that returns the size of thearray. 4. It allows the reading or printing of array through the use of coutandcin.

//*Array*

#include <iostream>
#include <math.h>
using namespace std;
class CppArray
{
public:
   int a[10], b[10], c[10], i, j, temp, n;
public:
   void read()
   {
      cout << "\nEnter the Size of Array:";
      cin >> n;
      cout << "Enter the Array elements:"<< "\n";
      for (i = 0; i < n; i++)
      {
         cout << "a[" << i << "]"<< "=";
         cin >> a[i];
      }
   }
   void display()
   {
      cout << "Array Elements Are:"
           << "\n";
      for (i = 0; i < n; i++)
      {
         cout << "a[" << i << "]"
              << "=" << a[i] << endl;
      }
   }

   void copy()
   {
      cout << "Copy Array is:" << endl;
      for (i = 0; i < n; i++)
      {
         c[i] = a[i];
      }
      for (i = 0; i < n; i++)
      {
         cout << "c[" << i << "]"
              << "=" << c[i] << endl;
      }
   }

   void range()
   {
      cout << "Range of Array is from:" << a[0] << "to" << a[n - 1] << endl;
   }
   void sort()
   {
      cout << "The Elements Before Sorting:" << endl;
      for (i = 0; i < n; i++)
      {
         cout << "a[" << i << "]"
              << "=" << a[i] << endl;
      }
      for (i = 0; i < n; i++)
      {
         for (j = 0; j < n - 1; j++)
         {
            if (a[j] > a[j + 1])
            {
               temp = a[j];
               a[j] = a[j + 1];
               a[j + 1] = temp;
            }
         }
      }
      cout << "Elements After Sorting:" << endl;
      for (i = 0; i < n; i++)
      {
         cout << "a[" << i << "]"
              << "=" << a[i] << endl;
      }
   }
   int size()
   {
      return n;
   }
};

int main()
{
   CppArray c;
   int x, choice;
   while (true)
   {
      cout << "\n********Menu***************";
      cout << "\n1)Insert Array Elements";
      cout << "\n2)Display the Array Elements";
      cout << "\n3)Copy one Array Elements To Another Array";
      cout << "\n4)To Find Range of Array";
      cout << "\n5)To Sort Array Elements";
      cout << "\n6)To Find Size Of Array";
      cout << "\n7)Exit." << endl;
      cout << "\nEnter Your Choice:";
      cin >> choice;
      switch (choice)
      {
      case 1:
         c.read();
         break;
      case 2:
         c.display();
         break;
      case 3:
         c.copy();
         break;
      case 4:
         c.range();
         break;
      case 5:
         c.sort();
         break;
      case 6:
         x = c.size();
         cout << "The Size Of Array is:" << x << endl;
         break;
      case 7:
         exit(0);
         break;
      default:
         cout << "INVALID CHOICE!!!" << endl;
      }
      char input;
      cout << "Do You Want To Repeat(Y/N)"
           << "\n";
      cin >> input;
      if (input == 'Y' || input == 'y')
      {
         continue;
      }
      else if (input == 'N' || input == 'n')
      {
         cout << "OK THANK YOU!" << endl;
         break;
      }
      else
      {
         cout << "Please enter either Y or N"
              << "\n";
      }
   }
   return 0;
}