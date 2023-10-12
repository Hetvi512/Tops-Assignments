#include<iostream>
#define N 10
using namespace std;
template<class p>
void sort(p a[],int n)
{
	int i,j;
	
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					p temp;
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
			}	
}
int main()
{
	int int_array[10],i;
	float float_array[10];
	cout<<"enter integer elements:"<<endl; 
		for(i=0;i<N;i++)
		{
			cin>>int_array[i];
		}
	cout<<"enter floating elements:"<<endl; 
		for(i=0;i<N;i++)
		{
			cin>>float_array[i];
		}
	sort(int_array,N);
	sort(float_array,N);
	
	cout<<endl<<"After sorting they are:"<<endl;
	for(i=0;i<N;i++)
		{
			cout<<int_array[i]<<",";
		}
		cout<<endl;
		for(i=0;i<N;i++)
		{
			cout<<float_array[i]<<",";
		}
	
	
	return 0;
}
