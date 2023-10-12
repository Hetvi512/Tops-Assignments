/*Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.*/
#include<iostream>
using namespace std;
class person{
	string name;
	int age;
	public:
	void get()
	{
		cout<<"Enter name:";
		cin>>name;
		cout<<"Enter age:";
		cin>>age;
	}
	void display()
	{
		cout<<"The name of the student is:"<<name<<endl;
		cout<<"The age of the student is:"<<age<<endl;
	}
}; 
class student{
	float per;
	public:
		void get1()
		{
			cout<<"Enter percentage of the student:";
			cin>>per;
		}
		void display1()
		{
			cout<<"The percentage of the student is:"<<per;
		}
};
class teacher:public person, public student{
	long int salary;
	public:
	void get2()
	{
		cout<<"Enter salary of the teacher:";
		cin>>salary;
	}
	void display2()
	{
		cout<<"The salary of the teacher is:"<<salary;
	}
};
int main()
{
	teacher obj;
	obj.get();
	cout<<endl;
	obj.get1();
	cout<<endl;
	obj.get2();
	cout<<endl;
	obj.display();
	cout<<endl;
	obj.display1();
	cout<<endl;
	obj.display2();
	
	return 0;
	
}
