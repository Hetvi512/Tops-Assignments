#include<iostream>
using namespace std;
inline int mul()//inline func uses cache memory for storage
{
	int a,b;
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter b:";
	cin>>b;
	return a*b;
}
inline int cube()
{
	int a;
	cout<<"Enter a:";
	cin>>a;
	return a*a*a;
}
int main()
{
	cout<<"Enter values for Multiplication......"<<endl;
	cout<<"The multiplication is "<<mul()<<endl;;
	cout<<"Enter value for finding cube........."<<endl;
	cout<<"The cube is "<<cube();
	return 0;
}
