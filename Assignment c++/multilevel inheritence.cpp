/*Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the marks
obtained in two subjects and class result contains the total marks obtained in
the test. The class result can inherit the details of the marks obtained in the
test and roll number of students.*/
#include<iostream>
using namespace std;
class students{
	public:
	int roll;
	public:
		void get()
		{
			cout<<"Enter roll no:";
			cin>>roll;
		}
		void display()
		{
			cout<<"The roll number of the student is:"<<roll;
		}
};
class test:public students{
	public:
	int m1,m2;
	public:
		void get1()
		{
			cout<<"Enter the marks obtained in subject 1:";
			cin>>m1;
			cout<<"Enter the marks obtained in subject 2:";
			cin>>m2;
		}
		void display1()
		{
		cout<<"The marks obtained by roll number "<<roll<<" in subject 1 is:"<<m1<<endl;
		cout<<"The marks obtained by roll number "<<roll<<" in subject 2 is:"<<m2<<endl;
		}
};
class result:public test{
	int total;
	public:
		void display2()
		{
			cout<<"The total marks obtained by the student is:"<<m1+m2<<endl;
		}
};
int main()
{
	result obj;
	obj.get();
	cout<<endl;
	obj.get1();
	cout<<endl;
	obj.display();
	cout<<endl;
	obj.display1();
	cout<<endl;
	obj.display2();
	
	return 0;
}
