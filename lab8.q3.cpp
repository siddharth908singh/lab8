//including library
#include<iostream>
using namespace std;
//including the main function
int main()
{
	int a;
	//asking for the number of elements of arrayint a;
	cout<<"Enter the number of elements of  of the array : "<<endl;
	cin>>a;
	int ar[a];
	//asking for the elements of aarray
	cout<<"enter the elements of array"<<endl;
	for(int i=0;i<a;i++)
	{
		cin>>ar[i];
	}
	int b;
	//sorting by bubble sort
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<(a-i);j++)
		{
			if(ar[j]>ar[j+1])
			{
				b=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=b;
			}			
		}
	}
	//giving the desired output
	cout<<"enter the nth smallest  number you want to find : "<<endl;
	cin>>b;
	cout<<"the number is"<<ar[b];
	cout<<"enter the nth largest  number you want to find : "<<endl;
	cin>>b;
	cout<<"the number is"<<ar[a-b];
	return 0;
}
