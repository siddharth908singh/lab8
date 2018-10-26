//including library
#include<iostream>
using namespace std;
//using suitable function to find the mea
void mean(int a[],int b){
	int c=0;
	
	//loop for finding sum of elements of the array
	for(int i=0;i<b;i++)
	c+=a[i];

	//finding the mean
	float p=float(c)/float(b);
	
	//giving the mean
	cout<<"the mean of the elements of the array is : " <<p<<endl;
	
}
//using suitable function to find the median of elements in ann array

void median(int a[],int b){
	int c,d,e;
	
	//creating loop to arrange the elements of array in ascending order
	do{
		c=0;
		for(e=0;e<(b-1);e++){
			if (a[e]>a[e+1]){
				d=a[e];
				a[e]=a[e+1];
				a[e+1]=d;
				c+=1;
			}
		}
	}
	while(c!=0);
	
	//printing the median
	if(b%2==0){
		float x=float(a[b/2])+float(a[(b/2)-1])/2;
		cout<<"median is : "<<x<<endl;
	}
	else
	cout<<"median = "<<a[b/2]<<endl;
}

//function printing minimum and maximum value of elements of array

void maxmin(int a[],int b){
	cout<<" the maximum value of the array is : "<<a[b-1]<<endl;
	cout<<" the minimum value of the array is : "<<a[0]<<endl;
}

//using the main function
int main(){
	int a[10],b;
	//asking for limit
	cout <<"enter the number of elements in the array : "<<endl;
	cin>>b;
	
	//asking for array elements
	cout<<"enter the elements : "<<endl;
	for(int i=0;i<b;i++)
	cin>>a[i];
	
	//calling the mean function
	mean(a,b);
	//calling the median functiom
	median(a,b);
	//calling the maxmin finction
	maxmin(a,b);
return 0;
}
