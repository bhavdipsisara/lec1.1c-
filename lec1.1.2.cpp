#include<iostream>
using namespace std;
int main()
{
	int m,n,i;

	cout<<"enter start year m=";
	cin>>m;

	cout<<"enter end year n=";
	cin>>n;

	int array [100],l=0;

	for(i=m;i<=n;i++)
	{
		if(i%4==0)
		{
		      array[l]=i;
	       	  l++;
		}
	}
	for(i=0;i<l;i++)
	{
	     cout<<"arrya[i]"<<i<<array[i]<<" ";	
	}

}