//include library
#include<iostream>
using namespace std;
//defining a suitable function to find sum
int sumarr(int a[],int b){
	int c=0;
	//creating loop for finding sum of elements if an array
	for(int i=0;i<b;i++)
	c+=a[i];

	//prgintin the sum
	cout<<"sum of the elements of the array is : "<<c<<endl;
	return 0;
}

//including the main function
int main(){
	int x[10],y;

	//asking the limit
	cout<<"enter the number of elements in the array : "<<endl;
	cin>>y;
	
	//asking for entries in the array
	cout<<"enter the elements of the array : " <<endl;
	for(int i=0;i<y;i++)
	cin>>x[i];
	//calling the function for sum
	sumarr(x,y);
return 0;
} 
