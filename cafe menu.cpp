#include<iostream>
using namespace std;
int main()
{
	int choice;
	double totalbill=0.0;
	do{
	cout<<"---CAFETERIA MENU----"<<endl;
	cout<<"1-TEA $2\n";
	cout<<"2-COFFEE $3\n";
	cout<<"3-SANDWICH $5\n";
	cout<<"4-BURGER $7\n";
	cout<<"5-----EXIT ----\n";
	cout<<"enter a choice";
	cin>>choice;
	
	switch(choice){
	case 1:
		totalbill+=2;
		break;
	case 2:
		totalbill+=3;
		break;
	case 3:
		totalbill+=5;
		break;
	case 4:
		totalbill+=7;
		break;
	case 5:
		cout<<"5-EXITING /n";
		break;
		default:
		cout<<"invalid choice..try again";
		
	}
}
	 while(choice!=5);
		cout<<"total=$"<<totalbill<<endl;
		return 0;
	}







