#include<iostream>
using namespace std;
template<class P>
P swap(P a,P b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"after swapping values are:"<<a<<" "<<b<<endl;
}
int main()
{
	swap(2,3);
	swap(5.6,7.6);
	return 0;
}
