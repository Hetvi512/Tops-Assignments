#include<iostream>
using namespace std;
class ope{
	int a,b,ans;
	public:
		ope()
		{
			cout<<"Enter a:";
			cin>>a;
			cout<<"Enter b:";
			cin>>b;
			ans=a+b;
			cout<<"Addition is:"<<ans;			
		}
		
		ope(int a, int b)
		{
			cout<<"Enter a:";
			cin>>a;
			cout<<"Enter b:";
			cin>>b;
			ans=a-b;
			cout<<"Substraction is:"<<ans;
		}
		
		ope(int a,int b,int c)
		{
			cout<<"Enter a:";
			cin>>a;
			cout<<"Enter b:";
			cin>>b;
			ans=a*b;
			cout<<"Multiplication is:"<<ans;
		}
		
		ope(int a)
		{
			int b;
			cout<<"Enter a:";
			cin>>a;
			cout<<"Enter b:";
			cin>>b;
			ans=a/b;
			cout<<"Division is:"<<ans;
		}
		
};

int main()
{
	int a,b,c,ch;
	cout<<"Enter:"<<endl<<"1 Addition"<<endl<<"2 Substraction"<<endl<<"3 Multiplication"<<endl<<"4 Division"<<endl;
	cout<<"Enter your choice:";
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
			ope obj;
			}
			break;
			
		case 2:
			{
			ope obj2(a,b);
			}
			break;
			
		case 3:
			{
			ope obj3(a,b,c);
			}
			break;
			
		case 4:
			{
			ope obj4(a);
			}
			break;
			
		default:
			cout<<"Invalid choice!!";
	}
	return 0;
}
