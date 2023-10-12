#include<iostream>
using namespace std;
class operation{
	int l,w,s;
	double r,h,b;
	public:
		void area(int length,int width)
		{
			l=length;
			w=width;
			cout<<"area of rectangle:"<<l*w<<endl;
		}
		
		void area(double radius)
		{
			r=radius;
			cout<<"area of circle is:"<<3.14*r*r<<endl;
		}
		
		void area(double height,double breadth)
		{
			h=height;
			b=breadth;
			cout<<"area of triangle is:"<<0.5*h*b<<endl;
		}
};
int main()
{
	operation obj;
	obj.area(3,5);
	obj.area(5.5);
	obj.area(3.5,6.7);
	
	return 0;
}
