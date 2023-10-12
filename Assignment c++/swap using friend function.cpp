#include<iostream>
using namespace std;
class operation{
	int a,b;
	public:
		void get()
		{
			cout<<"Enter a and b:";
			cin>>a>>b;
		}
		friend void swap(operation);
};

void swap(operation t)
{
	t.a=t.a+t.b;
	t.b=t.a-t.b;
	t.a=t.a-t.b;
	cout<<"After swapping :"<<t.a<<t.b;
}
int main()
{
	operation obj;
	obj.get();
	swap(obj);
	return 0;
}
