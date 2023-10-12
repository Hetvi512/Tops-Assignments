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
		friend void maximum(operation);
};
void maximum(operation t)
{
	(t.a>t.b)?cout<<"A is maximum":cout<<"B is maximum";
}
int main()
{
	operation obj;
	obj.get();
	maximum(obj);
	
	return 0;
}
