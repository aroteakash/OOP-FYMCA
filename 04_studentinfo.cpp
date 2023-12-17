//Develop an object oriented program in C++ to create a database of student information system containing the following information: Name, Roll number, Class, division, Date of Birth, Blood group, Contact address, telephone number, driving license no. etc Construct the database with suitable member functions for initializing and destroying the data viz constructor, default constructor, Copy constructor, destructor, static member functions, friend class, this pointer, inline code and dynamic memory allocation operators-new and delete. 

//Student information

#include<iostream>
using namespace std;
class Stud_Info
{
       public:
           char name[50],cls[10],divi[5],dob[20],addr[30];
           int rollno;
           long int mobno;
         Stud_Info()
          {
              char name='0';
              char cls='0';
              char divi='0';
              char dob='0';
              char addr='0';
              int rollno=0;
              long int mobno=0;
          }
          void readdata()
            {
                cout<<"Enter Student name:";
                cin>>name;
                cout<<"Enter Roll no:";
                cin>>rollno;
                cout<<"Enter the class:";
                cin>>cls;
                 cout<<"Enter the Division:";
                cin>>divi;
                 cout<<"Enter the Date Of Birth(DD/MM/YYYY):";
                cin>>dob;
                cout<<"Enter Full Address:"<<endl;
                cin>>addr;
                 cout<<"Enter  Mobile No:"<<endl;
                cin>>mobno;
             }
            void display();
              virtual void  disp()
               {
                     cout<<"This is virtual"<<endl;
               }
};

void Stud_Info:: display()
{
             cout<<"\nStudent name:"<<name<<endl;
             cout<<"Roll No:"<<rollno<<endl;
             cout<<"Class:"<<cls<<endl;
             cout<<"Division:"<<divi<<endl;
              cout<<"Date Of Birth (DD/MM/YYYY):"<<dob<<endl;
              cout<<"Address:"<<addr<<endl;
              cout<<"Mobile No:"<<mobno<<endl;
}
class Stud_Add_Info:public Stud_Info
{
       public:
             char blood[30],driv[15];
              Stud_Add_Info()
                {
                     char blood='0';
                     char driv='0';
                }
                void getdata()
                 {
                        cout<<"Enter Blood Group:"<<endl;
                        cin>>blood;
                        cout<<"Enter Driving Licence:";
                         cin>>driv;
                  }
                  void disp1()
                   {
                        cout<<"\n Blood Group:"<<blood<<endl;
                        cout<<" Driving Licence:"<<driv<<endl;
                   }
                   Stud_Add_Info()
                     {
                           cout<<"Destructor Invoked:\n";
                     }
};
int main()
{
     Stud_Info *obj1;
     Stud_Add_Info obj2;
     obj1=&obj2;
     obj1->readdata();
     obj2.getdata();
     obj2.disp1();
     obj1->display();
     obj1->disp();
     return 0;
}