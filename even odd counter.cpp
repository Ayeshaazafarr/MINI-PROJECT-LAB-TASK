#include<iostream>
using namespace std;
int main()
{
int number,oddcount=0,evencount=0;
cout<<"enter number";
while(true){
	cin>>number;
	if(number==0)
	return 0;
	if(number%2==0)
	evencount++;
	else
	oddcount++;
}
cout<<"odd numbers:"<<oddcount<<endl;
cout<<"even numbers:"<<evencount<<endl;
return 0;
}
