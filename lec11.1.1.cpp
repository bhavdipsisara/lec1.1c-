#include<iostream>

using namespace std;

int main()
{
	int n,i;
	
	cout<<"enter value n=";
	cin>>n;
	
	int arr[n];
	
	for(i=0;i<n;i++)
	{	
		cout<<arr[n]<<i;
	    cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			cout<<arr[i]<<" ";
		}
	}
}