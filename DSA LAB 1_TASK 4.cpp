#include<iostream>
using namespace std;
//swap  function
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
	//declaration
	int num1,num2;
	//input numbers from user
	cout<<"enter two numbers"<<endl;
	cin>>num1>>num2;
	cout<<"values before swapping "<<endl;
	cout<<"num1 :"<<num1<<" "<<"num2:"<<num2<<endl;
	//function call
    swap(&num1, &num2);
    //display result
		cout<<"values after swapping "<<endl;
	cout<<"num1 :"<<num1<<" "<<"num2:"<<num2<<endl;
	return 0;
	
}