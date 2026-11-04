#include<iostream>
using namespace std;
int main(){
	//declaration 
	int arr[10];
	int positive = 0,negative=0,zero=0;
	//Input Numbers
	cout<<"Enter 10 integers "<<endl;
	for ( int i=0;i<=10;i++){
		cin>>arr[i];
		if(arr[i]>0){
			positive++;
		}
		else if(arr[i]<0){
			negative++;
		}
		else{
			zero++;
		}
			}
			//display result
			cout<<"negative numbers ="<<negative<<endl;
			cout<<"positive numbers ="<<positive<<endl;
			cout<<"zero ="<<zero<<endl;
			return 0;
}