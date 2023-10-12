#include<iostream>
using namespace std;
void ope();
void ope(int a);
void ope(int a,int b);
void ope(int a,int b,int c);
void ope()
{
	int a,b,ans;
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter b:";
	cin>>b;
	ans=a+b;
	cout<<"The addiion is:"<<ans;
}

void ope(int a)
{
	int b,ans;
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter b:";
	cin>>b;
	ans=a-b;
	cout<<"The substraction is:"<<ans;
}

void ope(int a,int b)
{
	int ans;
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter b:";
	cin>>b;
	ans=a*b;
	cout<<"The multiplication is:"<<ans;	
}

void ope(int a,int b,int c)
{
	int ans;
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter b:";
	cin>>b;
	ans=a/b;
	cout<<"The division is:"<<ans;
}

int main()
{
	int choice,a,b,c;
	cout<<"Enter....."<<endl<<"1 Addition"<<endl<<"2 Substraction"<<endl<<"3 Multiplication"<<endl<<"4 Division"<<endl;
	cout<<"Enter your choice:";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			ope();
			break;
			
		case 2:
			ope(a);
			break;
			
		case 3:
			ope(a,b);
			break;
			
		case 4:
			ope(a,b,c);
			break;
			
		default:
			cout<<"Invalid choice:";
	}
	
	return 0;
}

