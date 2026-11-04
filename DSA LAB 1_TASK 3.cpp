#include<iostream>
using namespace std ;
int main(){
	//declaration
	int num;
	//input integer
	cout<<"Enter an integer "<<endl;
	cin>>num;
	//store address in a pointer 
	int *ptr = &num;
	//display initial value
	cout<<"value before modification"<<num<<endl;
	//modify value
	*ptr = *ptr * 2;
	//display modified value
	cout<<"value after modification "<<num <<endl;
	
	return 0;
}