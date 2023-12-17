#include<iostream>
#include<cstring>
using namespace std;
class Strg{
	char a[30],b[30];
	void conc(){
		cout<<"Enter First String : ";
		cin>>a;
		cout<<"Enter Second String : ";
		cin>>b;
		cout<<"Concatenation of String : "<<strcat(a,b)<<endl;
		menu();
	}
	void read(){
		cout<<"Enter String : ";
		cin>>a;
		cout<<"Entered String : "<<a<<endl;
		menu();
	}
	void reve(){
		cout<<"Enter String : ";
		cin>>a;
		cout<<"Reverse of Entered String is : "<<strrev(a)<<endl;
		menu();
	}
	void copy(){
		cout<<"Enter String : ";
		cin>>a;
		strcpy(b,a);
		cout<<"Copy of Entred String : "<<b<<endl;
		menu();
	}
	void lenc(){
		cout<<"Enter String : ";
		cin>>a;
		cout<<"Length of String : "<<strlen(a)<<endl;
		menu();
	}
	void comp(){
		cout<<"Enter First String : ";
		cin>>a;
		cout<<"Enter Second String : ";
		cin>>b;
		if(strcmp(a,b)==0){
			cout<<"Both are Equal\n";
			menu();
		}
		else{
			cout<<"Both are not Equal\n";
			menu();
		}
	}
public:
	void menu(){
		int n;
		cout<<"1. Read & Display String\n";
		cout<<"2. Concatenate String\n";
		cout<<"3. Reverse String\n";
		cout<<"4. Length of String\n";
		cout<<"5. Copy String\n";
		cout<<"6. Compare String\n";
		cout<<"7. Exit\n";
		cout<<"Enter Your Choice : ";
		cin>>n;
		switch(n){
		case 1:
			read();
			break;
		case 2:
			conc();
			break;
		case 3:
			reve();
			break;
		case 4:
			lenc();
			break;
		case 5:
			copy();
			break;
		case 6:
			comp();
			break;
		case 7:
			cout<<"You are exited from the program !!";
			exit(0);
			break;
		default:
			cout<<"Please Enter Valid Choice !!\n";
			menu();
		}
	}
};
int main(){
	Strg s1;
	s1.menu();
	return 0;
}