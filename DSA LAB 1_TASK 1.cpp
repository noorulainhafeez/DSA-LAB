#include<iostream>
using namespace std;
int main(){
	//declaration 
	int arr[5];
	int sum=0;
	double avg;
	//Input Numbers
	cout<<"Enter 5 numbers "<<endl;
	//calculate sum
	for (int i=0 ; i<5;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	//calculate avg
	avg=sum/5;
	//display result 
	cout<<"Sum ="<<sum<<endl;
	cout<<"Average ="<<avg<<endl;
	
	return 0;
}