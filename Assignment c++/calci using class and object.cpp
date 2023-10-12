#include<iostream>
using namespace std;
class calc{
	int a,b,ans;
	public:
		char ch;
	public:
		void menu()
		{
			cout<<"Enter"<<endl<<"+ Addition"<<endl<<"- Substraction"<<endl<<"* Multiplication"<<endl<<"/ Division"<<endl;
		}
		void choice()
		{
			cout<<"Enter your choice:"<<endl;
			cin>>ch;
		}
		void get()
		{
			cout<<"Enter a:";
			cin>>a;
			cout<<"Enter b:";
			cin>>b;
		}
		void add()
		{
			ans=a+b;
			cout<<"Addition is "<<ans;
		}
		void sub()
		{
			ans=a-b;
			cout<<"substraction is "<<ans;
		}
		void mul()
		{
			ans=a*b;
			cout<<"Multiplication is "<<ans;
		}
		int div()
		{
			return a/b;
		}
};
	int main()
	{
		int z;
		calc c1;
		c1.menu();
		c1.choice();
		switch(c1.ch)
		{
		case '+':
		c1.get();
		c1.add();
		break;
		
		case '-':
		c1.get();
		c1.sub();
		break;
		
		case '*':
		c1.get();
		c1.mul();
		break;
		
		case '/':
		c1.get();
		z=c1.div();
		cout<<"Division is "<<z;
		break;
		
		default:
		cout<<"Invalid choice!!";	
		}
		return 0;
	}
