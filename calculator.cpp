#include<iostream>
#include<cmath>
using namespace std;
double add(int x, int y);
double subtract(int x, int y);
double exponent(int x,int y);
double root(int x);
double percentage(int x,int y);

int main()
{
	int a,b;
	cout<<"\t\t\t\t\tHello Welcome to My Simple Calculator."<<endl<<endl;
	cout<<"Dear user you have the following options:"<<endl;
	cout<<"\n\t1.Addition"<<endl
	    <<"\n\t2.Subtraction"<<endl
		<<"\n\t3.Exponentiation"<<endl
		<<"\n\t4.Square Root"<<endl
		<<"\n\t5.Percentage";
	int choice;
	cout<<endl;
	cout<<"\n\nDear User Please Enter Your Choice:"<<endl;
	cout<<endl;
	cin>>choice;
	if(choice>5)
	{
		cout<<"Dear User Please Enter a Valid Option.";
	}
	else
	{
		cout<<"\nThe Choice You Entered is: "<<choice<<endl;
		cout<<endl;
		cout<<"Please Enter Two Numbers for the Operation of Your Choice:"<<endl;
		cout<<endl;
		cin>>a>>b;
	}
	
	
	
	
	switch(choice)
	{
		case 1:
			add(a,b);
			cout<<"---------------------------------------------------------"<<endl;
			main();
		case 2:
			subtract(a, b);
			cout<<"---------------------------------------------------------"<<endl;
			main();
		case 3:
			exponent(a, b);
			cout<<"---------------------------------------------------------"<<endl;
			main();
		case 4:
			root(a);
			root(b);
			cout<<"---------------------------------------------------------"<<endl;
			main();
		case 5:
			percentage(a,b);
			cout<<"---------------------------------------------------------"<<endl;
			main();
			
	}
}
double add(int x,int y)
{
	cout<<"\nThe Result of the operation is :"<<x+y<<endl;
	cout<<endl;
}
double subtract(int x, int y)
{
	cout<<"\nThe Result of the operation is :"<<x-y<<endl;
	cout<<endl;
}
double exponent(int x, int y)
{
	cout<<"\nThe Result of the operation is :"<<pow(x,y)<<endl;
	cout<<endl;
}
double root(int x)
{
	cout<<"\nThe Result of the operation is :"<<sqrt(x)<<endl;
	cout<<endl;
	
}
double percentage(int x, int y)
{
	double ratio=x/y;
	cout<<"\nThe Result of the operation is :"<<ratio*100;
	cout<<endl;
}
