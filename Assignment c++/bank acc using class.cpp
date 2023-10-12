#include<iostream>
using namespace std;
class account{
	string name,acc_type;// data members
	int acc_no,amt,balance,dep,with;
	
	public:
		void assign() //member functions 
		{
			cout<<"Enter your account number:";
			cin>>acc_no;
			cout<<"The balance is:";
			cin>>balance;
			
			cout<<"Enter the name of the depositor:";
			cin>>name;
			cout<<"Enter the type of account savings or withdraw:";
			cin>>acc_type;
		}
		
		void deposit()
		{
			cout<<"Enter the amount you want to deposit:";
			cin>>amt;
			dep=amt+balance;
		}
		
		void withdraw()
		{
			int val;
			if(dep>3000)
			{
				cout<<"Enter the amount you want to withdraw:";
				cin>>val;
				with=dep-val;
			}
			else
			{
				cout<<"Insufficient balance!!";
			}
		}
		
		void display()
		{
			cout<<"The name is "<<name<<" and the total balance is "<<with;
		}
};

	int main()
	{
		account obj;//object creation
		obj.assign();
		obj.deposit();
		obj.withdraw();
		obj.display();
		
		return 0;
	}
