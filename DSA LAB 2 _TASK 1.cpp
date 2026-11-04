#include<iostream>
using namespace std;
int main(){
	int arr[5];
	int evenNoCount=0;
	int oddNoCount=0;
	int *ptr = arr;
	
	cout<<"Enter 5 integers"<<endl;
	for (int i=0;i<5;++i){
		cin>>arr[i];
	
	if(*ptr%2==0){
		evenNoCount++;
	}else{
		oddNoCount++;
	}
	ptr++;
}
cout<<"Even numbers count = "<<evenNoCount<<endl;
cout<<"Odd numbers count = "<<oddNoCount<<endl;
	return 0;
}