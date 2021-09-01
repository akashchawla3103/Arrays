#include<iostream>
using namespace std;
void reverse(int *A,int n)
{
	int k=0,l=n-1;
	while(k<l)
	{
		int temp=A[k];
		A[k]=A[l];
		A[l]=temp;
		k++;
		l--;
	}	
}
void display(int *A,int n )
{
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	reverse(arr,n);
	display(arr,n);
}
